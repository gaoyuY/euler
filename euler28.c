/*************************************************************************
	> File Name: /home/gaoyu/euler/euler28.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月22日 星期日 10时34分24秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int sum = 1;
    int i, n;
    for (i = 3; i <= 1001; i +=2) {
        sum += 4 * i * i - 6 * i + 6;
    }
    printf("%d\n", sum);
    return 0;
}
