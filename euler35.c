/*************************************************************************
	> File Name: eule35.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月28日 星期六 14时27分59秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 1000000
int prime[MAX_N + 5] = {0};

int Prime(int x) {
    
    for (int i = 2; i * i <= x; i++) {
                if (x % i == 0)  return 0;
            
    }
        return 1;
}

int main () {
    int ans = 0;
    int n;
    int m;
    int a;
    for (int i = 2; i < MAX_N; i++) {
        n = floor(log10(i) + 1);
        m = n;
        a = i; 
        while (m) {
            m--;
            if (Prime(a)) {
                if (m == 0) {
                    ans ++;
                    printf ("%d ", a);
                    break;
                }
                a = a / pow(10, n - 1) + (a % (int)pow(10, n - 1)) * 10;
            }   
        }   
    }
    printf("%d\n", ans);
    return 0;
 }
