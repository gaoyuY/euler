/*************************************************************************
	> File Name: /home/gaoyu/euler/EULER05.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月22日 星期日 16时07分11秒
 ************************************************************************/
 /*题目
　　2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
    What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
    答案：２３２７９２５６０
  */

#include<stdio.h>
int gcd(int a, int b) {   //最大公约数函数
    if(!b) return a;
    return gcd(b, a % b);
    //return  (b ? gcd(b, a % b) : a);
}

int main() {
    int ans = 1;
    for (int i = 1; i <= 20; i++) {
        if (ans % i == 0) continue;
        ans = ans * i / gcd(ans, i); //公式：最小公倍数(a, b) = (a * b) / gcd (a, b)　
    }
    printf("%d\n", ans);

    return 0;
}
