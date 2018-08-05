/*************************************************************************
	> File Name: /home/gaoyu/euler/euler36.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月22日 星期日 14时52分02秒
 ************************************************************************/

#include<stdio.h>
int is_palindromic(int x, int y) {
    int num = 0;
    int temp = x;
    while (x) {
        num = num * y + x % y;
        x /= y;
    }
    return temp == num;
}

int main () { 
    int i;
    int ans = 0;
    for (i = 1; i <= 1000000; i++) {
        if (!is_palindromic(i, 2)) continue;
        if (!is_palindromic(i, 10)) continue;
        ans += i;
    }
    printf("%d\n", ans);



    return 0;
}
