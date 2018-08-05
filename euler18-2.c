/*************************************************************************
	> File Name: euler18-2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月29日 星期日 15时11分33秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 15
#define max(a, b) ((a) > (b) ? (a) : (b))
int keep[MAX_N][MAX_N];
int main () {
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j <= i; j++) {
            scanf ("%d", &keep[i][j]);
        }
    }
    for (int i = 13; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            keep[i][j] += max(keep[i + 1][j], keep[i + 1][j + 1]);
        }
    }

    printf ("%d\n", keep[0][0]);

    return 0; 
}
