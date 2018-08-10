/*************************************************************************
	> File Name: euler07-2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月24日 星期二 10时23分20秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 200000
int prime[MAX_N + 5] = {0};//存放素数值
int is_prime[MAX_N + 5] = {0};//判断是否为素数，是为０，反之为１

int main () {
    // 线性筛 两个数组 
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_prime[i]) {
            prime[++prime[0]] = i;//将素数存在prime[]数组
        }
        for (int j = 1; j <= prime[0]; j++ ) {
            if (i * prime[j] > MAX_N)  break;   //超出范围则跳出
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;//当i和prime[j]不互质时,此时i不是i * prime[j]的最大合数

        }
    }

    /*for (int i = 1; i <= prime[0]; i++) {
        printf("%d ", prime[i]);
    }
    printf("\n");*/

    printf ("%d\n", prime[10001]);

    return 0;
}
