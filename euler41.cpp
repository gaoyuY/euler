/*************************************************************************
	> File Name: 41.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 19时08分57秒
 ************************************************************************/
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<inttypes.h>
#define MAX_N 10000000
int64_t prime[MAX_N + 5] = {0};
int is_prime[MAX_N + 5] = {0};
int num[9] = {1, 2, 3, 4, 5, 6, 7};
using namespace std;
void IS_Prime() {
    for (int64_t i = 2; i < MAX_N; i++) {
        if (!is_prime[i]) {
            prime[++prime[0]] = i;
        }
        for (int64_t j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }

    return;
}

int64_t get_num (int *num) {
    int sum = 0;
    for (int i = 0; i < 7; i++) {
        sum = sum * 10 + num[i];
    }

    return sum;
}
int main () {
    IS_Prime();
    int64_t max = 0;
    while(next_permutation(num, num + 7)) {
        int64_t sum = get_num(num);
        if (is_prime[sum]) continue;
        if (max < sum) {
            max = sum;
        }
    } 

    printf ("%" PRId64"\n", max);

    return 0;
    
}
