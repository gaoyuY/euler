/*************************************************************************
	> File Name: euler20.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月30日 星期一 11时00分22秒
 ************************************************************************/

#include<stdio.h>
int a[ 500 ] = {1,1};
int main () {
    int ans = 1;
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= a[0]; j++) {
            a[j] *= i;
        }
        for (int j = 1; j <= a[0]; j++) {
            if (a[j] < 10) continue;
            a[j + 1] += a[j] / 10;
            a[j] = a[j] % 10;
            if (j == a[0]) 
                a[0] ++;
        }
    }
    int sum = 0;
    for (int i = 1; i <= a[0]; i++) {
        sum += a[i];
    }

    printf("%d\n", sum);


    return 0;
}
