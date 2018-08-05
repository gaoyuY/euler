/*************************************************************************
	> File Name: euler16-1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月26日 星期四 10时42分56秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int num[400] = {1,1};
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= num[0];j++) {
            num[j] *=  1024;
        }

        for (int j = 1; j <= num[0]; j++) {
            if (num[j] >= 10) {
                num[j + 1] += num[j] / 10;
                num[j] %= 10;
                if (j == num[0]) {
                    num[0]++;
                }
            }
        }
    }
    int sum = 0;
    for (int i = 1; i <= num[0]; i++) {
        sum += num[i];
    }

    printf ("%d\n", sum);

    return 0;
}
