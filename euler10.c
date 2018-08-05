/*************************************************************************
	> File Name: euler10.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月26日 星期四 09时18分01秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#define MAX_N 2000000
int64_t prime[MAX_N +5] = {0};
int main () {
    
    for (int64_t i = 2; i <= MAX_N; i++) {
        if (!prime[i])
            prime[++prime[0]] = i;
        
        for (int64_t j = 1; j <= prime[0] && prime[j] * i <= MAX_N; j++) {
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    int64_t sum = 0;
    for (int64_t i = 1; i <= prime[0]; i++) {
        if (prime[i] < MAX_N) {
            sum += prime[i];
        }
       //printf("%d ", prime[i]);
    }
    printf ("%"PRId64"\n", sum);


    return 0;
}
