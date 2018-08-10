/*************************************************************************
	> File Name: /home/gaoyu/euler/euler07.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月22日 星期日 18时42分10秒
 ************************************************************************/
 /*题目
  　By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.What is the 10001st prime number?
  答案：１０４７４３
  */

#include<stdio.h>
#define MAX 200000
int prime[MAX + 5] = {0};

void init () {   //素数筛
    for (int i = 2; i * i <= MAX; i++) {
        if (prime[i])  continue;
        for (int j = i * i; j <= MAX; j += i) {
            prime[j] = 1;
        }
    }

    for (int i = 2; i <= MAX; i++) {
        if (prime[i]) continue;
        prime[++prime[0]] = i;
    }

    return ;
}

int main() {
    init();
    printf("%d\n", prime[10001]);

    return 0;
    
}
