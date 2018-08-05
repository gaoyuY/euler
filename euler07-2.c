/*************************************************************************
	> File Name: euler07-2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月24日 星期二 10时23分20秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 200000
int prime[MAX_N + 5] = {0};
int is_prime[MAX_N + 5] = {0};

int main () {
    // 线性筛 两个数组 
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_prime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1, p = prime[1]; j <= prime[0]; j++, p = prime[j] ) {
            if (i * p > MAX_N)  break;
            is_prime[p * i] = 1;
            if (i % p == 0) break;

        }
    }

    /*for (int i = 1; i <= prime[0]; i++) {
        printf("%d ", prime[i]);
    }
    printf("\n");*/

    printf ("%d\n", prime[10001]);

    return 0;
}
