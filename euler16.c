/*************************************************************************
	> File Name: euler16.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月27日 星期五 00时10分19秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int a[355] = {1,1};
    int sum = 0;
    for (int i = 1; i <= 1000; i++) {
        for (int k = 1; k <= a[0]; k++)
            a[k] *= 2;
    
        for (int j = 1; j <= a[0]; j++) {
            if (a[j] < 10)  continue; 
                a[j + 1] += a[j] / 10;
                a[j] = a[j] % 10;
                a[0] += (j == a[0]); 
        }
    }
    for (int  i = 1; i <= a[0]; i++) {
        sum += a[i];
        printf("%d", a[i]);
    } 
    printf("\n");
    printf("%d\n", sum);


    return 0;
}
