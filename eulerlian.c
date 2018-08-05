/*****************************************************mZ*******************
	> File Name: eulerlian.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月24日 星期二 09时23分38秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 10000
int prime[MAX_N + 5] = {0};
int main () {
    for(int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i; j <= MAX_N; j += i ) {
            if (prime[j]) continue;
            prime[j] = i;
        }
    }

    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        prime[i] = i;
    }

    for (int i = 2; i <= MAX_N; i++) {
        printf("%d max prime is %d\n", i, prime[i]);
    }

    return 0;
}
