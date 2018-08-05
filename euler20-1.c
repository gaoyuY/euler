/*************************************************************************
	> File Name: euler20-1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 09时01分44秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 1000

int main () {
    int x = 0;
    int sum = 0;
    int a, b, c;
    for (int n = 1; n < MAX_N && x == 0; n++) {
        for (int m = n + 1; m < MAX_N; m++) {
            a = 2 * n * m;
            b = m * m - n * n;
            c = m * m + n * n;
            if (MAX_N % (a + b + c) == 0) {
                sum =(int)pow(MAX_N / (a + b + c), 3) * a * b * c;
                x++;
                break;
            }
        }
    }
    printf ("%d\n", sum);

    return 0;
}
