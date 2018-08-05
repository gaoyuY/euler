/*************************************************************************
	> File Name: /home/gaoyu/euler/euler36-1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月23日 星期一 11时59分24秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000
int palindromic(int m, int n) {
    
    int temp = m; 
    int sum = 0;
    while(m) {
        sum = sum * n + m % n;
        m /= n;
    }
    if (temp == sum) {
        return 1;
    }

    return 0;
}

int main() {
    int ans = 0;
    for (int i = 1; i <= MAX_N; i++) {
        if (!palindromic(i, 10)) continue;
        if (!palindromic(i, 2)) continue;
        ans += i;
    }
    printf ("%d\n", ans);
    return 0;
}
