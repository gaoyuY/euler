/*************************************************************************
	> File Name: eule35.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月28日 星期六 14时27分59秒
 ************************************************************************/
/*题目　圆周素数
 * 197被称为圆周素数，因为将它逐位旋转所得到的数：197/971和719都是素数。
 * 小于100的圆周素数有十三个：2、3、5、7、11、13、17、31、37、71、73、79和97。
 * 小于一百万的圆周素数有多少个？
 * 答案：55
 */
#include<stdio.h>
#include<math.h>
#define MAX_N 1000000
int prime[MAX_N + 5] = {0};

int Prime(int x) {   //判断是否为素数
    
    for (int i = 2; i * i <= x; i++) {
            if (x % i == 0)  return 0;
            
    }
        return 1; // 是素数返回１
}

int main () {
    int ans = 0;
    int n;
    int m;
    int a; 
    for (int i = 2; i < MAX_N; i++) {
        n = floor(log10(i) + 1); //求位数
        m = n;
        a = i; 
        while (m) {
            m--;
            if (Prime(a)) { //判断这个数是否为圆周素数
                if (m == 0) {
                    ans ++;
                   // printf ("%d ", a);
                    break;
                }
                a = a / pow(10, n - 1) + (a % (int)pow(10, n - 1)) * 10;
            }   
        }   
    }
    printf("%d\n", ans);
    return 0;
 }
