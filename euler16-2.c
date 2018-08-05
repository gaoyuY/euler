/*************************************************************************
	> File Name: euler16-2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月30日 星期一 11时40分04秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000
int a[400] = {1,1};
int main () {
    for (int i = 1; i <= 1000; i++) {
        for (int k = 1; k <= a[0]; k++)
            a[k] *= 2;
        for (int j = 1; j <= a[0]; j++) {
            if (a[j] < 10) continue;
            if (a[j] >= 10) {
                a[j + 1] += a[j] / 10;
                a[j] = a[j] % 10;
                if (j == a[0]) a[0]++;
            }
        }   
       
    }
    for (int i = 1; i <= a[0]; i++) {
        printf("%d", a[i]);
    }
    
    return 0;
}
