/*************************************************************************
	> File Name: euler50.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 14时10分40秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000
int is_prime[MAX_N + 5] = {0}; //标记是否为素数
int prime[MAX_N + 5] = {0}; //存放素数的数组
void Prime() {
    for (int i = 2; i < MAX_N; i++) {
        if (!is_prime[i]) {
            prime[++prime[0]] = i;  //prime[0] 存放素数的个数
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0)  break;
        }
    }

    return;
}
int main () {
    Prime();
    int sum = 0;
    int max = 0;
    for (int i = 1; i <= prime[0]; i++) { //求小于MAX_N的最大的是素数的素数和
        sum += prime[i];   //素数和
        if (sum >= MAX_N)  break;
        if (is_prime[sum]) continue;  //判断是不是素数
        if (sum > max)  max = sum;
    }

    printf("%d\n", max);


    return 0;
}
