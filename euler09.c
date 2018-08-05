/*************************************************************************
	> File Name: euler09.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月30日 星期一 09时43分17秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 1000

int main () {
    int x = 0;//满足题目要求的数的个数初始化为0
    int sum = 0;//要输出的a * b * c的乘积
    int a, b , c;
    for (int n = 1; n < MAX_N && x == 0; n++) {
        for (int m = n + 1; m < MAX_N; m++) {
            a = 2 * n * m;                      //素勾股数的性质四
            b = m * m - n * n;
            c = m * m + n * n;
            if (a + b + c == 1000) {
                sum = a * b * c;
                x ++;
                break;
            }
        
        }
    }    

    printf ("%d\n", sum);

    return 0;
}
