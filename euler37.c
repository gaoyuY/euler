/*************************************************************************
	> File Name: euler37.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月28日 星期六 19时50分00秒
 ************************************************************************/
/*题目可截素数 3797有着奇特的性质。不仅它本身是一个素数，而且如果从左往右逐一截去数字，剩下的仍然都是素数：3797、797、97和7；
 * 同样地，如果从右往左逐一截去数字，剩下的也依然都是素数：3797、379、37和3。
 * 只有11个素数，无论从左往右还是从右往左逐一截去数字，剩下的仍然都是素数，求这些数的和。
 * 注意：2、3、5和7不被视为可截素数
 * 答案：748317
 * */
#include<stdio.h>
#include<inttypes.h>
#include<math.h>
#define MAX_N 1000000
//#define Dug      //自定义输出 
#ifdef Dug
#define dug1(a, b) printf(a, b)
#else 
#define dug1(a, b)
#endif
int prime[MAX_N] = {0};     //存放素数的数组
int is_prime[MAX_N] = {0};  //判断是否为素数
 //素数筛
void Prime() {
    is_prime[1] = 1;
    is_prime[0] = 1;
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_prime[i]){
            prime[++prime[0]] = i;   
        }
        for (int j = 1, p = prime[1]; j <= prime[0]; p = prime[++j]) {
            if (i * p > MAX_N)  break;
            is_prime[p * i] = 1;
            if (i % p == 0)  break;
        }
    }

}


int han1(int a){  // 正向截取判断是否是素数
    int c = floor(log10(a) + 1);//求位数
    while (!is_prime[a]) {
        a %= (int)pow(10, --c);
        if (c == 0) return 1;
    }
    return 0;
}  

int han2(int b) {    //反向截取判断是否是素数
    while (!is_prime[b]) {
        b /= 10;
    }
    if (b > 0) return 0;
    return 1;
}
int main () {
    Prime();
    int n = 11;
    int sum = 0;
    for (int i = 11; n != 0; i++){ //因为只有11个这样的数，就以11作为跳出条件
        if (han1(i) && han2(i)){
            sum = sum + i;         //求和
            n--;
           //dug1("%d\n", i);
        }

    }
    printf("%d\n", sum);
    return 0;
}
