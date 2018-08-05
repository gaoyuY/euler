/*************************************************************************
	> File Name: /home/gaoyu/euler/euler04-2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月23日 星期一 14时37分28秒
 ************************************************************************/

#include<stdio.h>
int parlindromic(int num) {

    int temp = num;
    int m = 0;
    while (num) {
        m = m * 10  + num % 10;
        num /= 10;
    }
    if (temp == m) return 1;
    return 0;
    
}

int main() {
    int ans = 0;
    int tep = 100;
    for (int i = 999; i >= tep; i--) {
        for (int j = i; j >= 100; j--) {
            if (parlindromic(i * j) && i * j > ans) {
                ans = i * j;
                tep = j;
                break;
            }
        }
    }
    printf ("%d\n", ans);

    return 0;
}
