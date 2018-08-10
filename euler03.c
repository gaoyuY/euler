/*************************************************************************
	> File Name: euler03.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月20日 星期五 15时27分46秒
 ************************************************************************/
 /*题目
    The prime factors of 13195 are 5, 7, 13 and 29.
  
   What is the largest prime factor of the number 600851475143 ?
   答案：６８５７
*/
  

#include<stdio.h>
#include <inttypes.h>
#define NUM 600851475143
int main () {
    int64_t num = NUM, n = 2, ans = 0;
    while (n * n <= num) {      
        if (num % n == 0) ans = n;  //此时ｎ一定是素数,利用反证法，如果此时ｎ不是素数，那么当n的约数时，ｎ就已经被去除了，所以此时ｎ为素数
        while (num % n == 0) num /= n;
        n += 1;
    }
    if (num != 1) ans = num; //运行过while语句后，说明num已经没有除了１和它本身以外的约数，如果此时num!= 1,那么num 是最大素数因子
    printf("%" PRId64 "\n", ans);
    return 0;
}

