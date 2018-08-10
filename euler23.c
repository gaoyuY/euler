/*************************************************************************
	> File Name: 23.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月06日 星期一 20时56分29秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX_N 28123
int min_num[MAX_N + 5] = {0};
int dnum[MAX_N + 5] = {0};
int prime[MAX_N + 5] = {0};
int num[MAX_N + 5] = {0};
void init () {
    for (int i = 2; i < MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            dnum[i] = i + 1;
            min_num[i] = 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                min_num[i * prime[j]] = min_num[i] + 1;
                dnum[i * prime[j]] = dnum[i] * (1 - (int)pow(prime[j], min_num[i] + 2)) / (1 - (int)pow(prime[j], min_num[i] + 1));
                break;
            }else  {
                min_num[i * prime[j]] = 1;
                dnum[i * prime[j]] = dnum[i] * dnum[prime[j]];
            }
        }
    }
    return;
}
int main () {
    init();
    for (int i = 2; i < MAX_N; i++) {
        dnum[i] -= i;
        if (dnum[i] > i)
            dnum[++dnum[0]] = i;
    }
    memset(prime, 0, sizeof(prime));
    for (int i = 1; i <= dnum[0]; i++) {
        for (int j = i; j <= dnum[0]; j++) {
            if (dnum[i] + dnum[j] >= MAX_N) break;
            prime[dnum[i] + dnum[j]] = 1;
        }
    }
    int sum = 0;
    for (int i = 1; i < MAX_N; i++) {
        if (!prime[i]) {
            sum += i;
        }
    }
    printf ("%d\n", sum);

    return 0;
}
