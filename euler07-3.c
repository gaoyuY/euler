/*************************************************************************
	> File Name: euler07-3.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月26日 星期四 09时54分23秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 2000000

int prime[MAX_N + 5] = {0};
    // 线性筛一个数组
int main() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
                    
        }
        for (int j = 1; j <= prime[0] && prime[j] * i <= MAX_N; j++) {
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }    
    }
    int sum = 0;

    for (int i = 1; i <= prime[0]; i++) {
        if (prime[i] < MAX_N ) {
            sum += prime[i];
            printf("%d ", prime[i]);
        }                
    }
    
    printf("\n");
    printf("%d\n", sum);
        return 0;

}

