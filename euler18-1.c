/*************************************************************************
	> File Name: euler18.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月29日 星期日 14时40分50秒
 ************************************************************************/
//搜索 + 记忆化  （从 （0， 0）到 最后一行的 最大路径值）
#include<stdio.h>
#define MAX_N 15
int map[MAX_N + 5][MAX_N + 5] = {0};
int keep[MAX_N + 5][MAX_N + 5] = {0};

int solve(int i, int j) {
    if (i == MAX_N)  return 0;
    int lnum = solve(i + 1, j);
    if (keep[i][j])  return keep[i][j];
    int rnum = solve(i + 1, j + 1);
    keep[i][j] = (lnum > rnum ? lnum : rnum) + map[i][j];
   // return (lnum > rnum ? lnum : rnum) + map[i][j];
}
int main () {
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j <= i; j++) {
            scanf("%d", map[i] + j);
        }
    }
    printf("%d\n", solve(0, 0));

    return 0;
} 
