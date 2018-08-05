/*************************************************************************
	> File Name: euler37.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月28日 星期六 19时50分00秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#include<math.h>
#define MAX_N 1000000
//#define Dug 
#ifdef Dug
#define dug1(a, b) printf(a, b)
#else 
#define dug1(a, b)
#endif
int prime[MAX_N] = {0};
int is_prime[MAX_N] = {0};
void Prime() {
    is_prime[1] = 1;
    is_prime[0] = 1;
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_prime[i]){
            prime[++prime[0]] = i;   
        }
        for (int j = 1, p = prime[1]; j <= prime[0]; p = prime[++j]) {
            if (i * p > MAX_N)  break;
            is_prime[p * i] = 1;
            if (i % p == 0)  break;
        }
    }

}


int han1(int a){
    int c = floor(log10(a) + 1);
    while (!is_prime[a]) {
        a %= (int)pow(10, --c);
        if (c == 0) return 1;
    }
    return 0;
}  

int han2(int b) {
    while (!is_prime[b]) {
        b /= 10;
    }
    if (b > 0) return 0;
    return 1;
}
int main () {
    Prime();
    int n = 11;
    int sum = 0;
    for (int i = 11; n != 0; i++){
        if (han1(i) && han2(i)){
            sum = sum + i;
            n--;
           dug1("%d\n", i);
        }

    }
    printf("%d\n", sum);
    return 0;
}
