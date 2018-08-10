/*************************************************************************
	> File Name: /home/gaoyu/euler/euler04.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月21日 星期六 20时14分15秒
 ************************************************************************/
/* 题目
 　A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
　Find the largest palindrome made from the product of two 3-digit numbers.
　　答案：９０６６０９
*/
#include<stdio.h>
int huiwen (int num) { 
    int m = 0;
    int n = num;
        while(n) {              //将数字翻转过来
            m = m * 10 + n % 10;
            n /= 10; 
        }
        if (m == num){        //如果翻转后的数与原数相等，返回１，反之返回０
            return 1;
        }
        return 0;
    }
    
int main () {

    int i, j;
    int tep, l = 0;
    for (i = 999; i >= 100; i--) {          //求两个三位数的乘积,两个数范围均在100 ~ 999之间,求最大，从大到小循环时间更短
        for (j = i; j >= 100; j--) {        //防止重复运算，j 从 i 开始循环
            if (i * j > l && huiwen(i * j)) {
                l = i * j;
                tep = j;
                break;
            }
        }
    }

    printf("%d\n", l);
    return 0;
}
