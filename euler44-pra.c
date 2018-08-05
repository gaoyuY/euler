/*************************************************************************
	> File Name: euler35.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月28日 星期六 11时54分40秒
 ************************************************************************/

#include<stdio.h>

int stere(int m) {
    return m * m * m;
}

int is_stere(int n) {
    int head = 1;
    int tail;
    int mid;
    tail = n;
    while (head <= tail) {
        mid = (head + tail) / 2;
        if (stere(mid) == n) return 1;
        if (stere(mid) < n) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}
int main () {
    int n;
    while(~scanf("%d", &n)){
        if (is_stere(n)) 
            printf("Yes\n");
        else
            printf("NO\n");
    }


    return 0;
}
