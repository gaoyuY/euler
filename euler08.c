/*************************************************************************
> File Name: euler08.c
> Author: 
> Mail: 
> Created Time: 2018年07月24日 星期二 11时40分49秒
************************************************************************/
/*题目
　The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.
　Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?
  答案：23514624000
*/
#include<stdio.h>
#include <inttypes.h>
char a[1000] = {0};
int main () {
    scanf("%s", a); //输入字符串数组
    int64_t max = 0;
    for (int i = 0; i < 1000; i++) {
        int64_t sum = 1;
        for (int j = i; j <= 12 + i; j++) {//每13个数算一次运算
            if (a[j] =='0' ) {//当等于０时，直接跳到０后以为重新开始运算
                i = j;
                break;
            }
            sum *= a[j] - '0';    //计算乘积       
            if (j == 12 + i) {// 判断乘积最大值
                if (max < sum ) {
                    max = sum;
                }
            }
        }
    }

    printf ("%"PRId64"\n", max);

    return 0;
}
