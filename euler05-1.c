/*************************************************************************
	> File Name: /home/gaoyu/euler/euler05-1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月23日 星期一 15时09分45秒
 ************************************************************************/

#include<stdio.h>
int gcd (int m, int n) {
    if (!n) return m;
    return gcd(n, m % n); // gcd(m, n) = gcd(n, m % n)       
}
int main (){
    int ans = 1;// 当前的最小公倍数
    for (int i = 1; i <= 20; i++) {
        if (ans % i == 0) continue;
        ans = ans * i / gcd(ans, i);
    }

    printf ("%d\n", ans);
    return 0;
}
