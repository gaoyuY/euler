/*************************************************************************
	> File Name: 46.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月06日 星期一 13时21分13秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 10000000
int prime[MAX_N + 5] = {0};
int is_prime[MAX_N + 5] = {0};
void init () {
    for (int i = 2; i < MAX_N; i++) {
        if (!is_prime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return;
}
int main () {
    init();
    int m = 0;
    for (int i = 35; ; i += 2) {
        if (!is_prime[i]) continue;
        int x  = 0;
        for (int j = 1; j * j * 2 < i; j++) {
            if (!is_prime[i - j * j * 2]) {
                x++;
                break;
            }

        }
        if (x == 0) {
            m = i;
            break;
        }
    }
    printf ("%d\n",  m);
     
    return 0;
}
