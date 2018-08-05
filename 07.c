/*************************************************************************
	> File Name: 07.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 16时33分25秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 200000
int prime[MAX_N + 5] = {0};
void Prime() {
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]){
            continue;
        }
        for (int j = i * i; j <= MAX_N; j += i) {
            prime[j] = 1;
        }
    }
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i])  continue;
        prime[++prime[0]] = i;
    }

return;
}
int main () {
    Prime();
    printf("%d\n", prime[10001]);

    return 0;
}

