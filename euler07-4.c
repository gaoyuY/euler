/*************************************************************************
	> File Name: euler07-4.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月26日 星期四 19时37分19秒
 ************************************************************************/
//线性筛 求第10001个素数
#include <stdio.h>
#define MAX_N 200000

int prime[MAX_N + 5] = {0};

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
   /* for (int i = 1; i <= prime[0]; i++) {
        printf("%d ", prime[i]);
            
    }
        printf("\n");*/
    printf("%d\n", prime[10001]);
        return 0;

}
