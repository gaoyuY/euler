/*************************************************************************
	> File Name: euler15.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月29日 星期日 12时00分54秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
/*int64_t fac(int n) {
    if (n == 1)   return 1;
    return fac(n - 1) * n;*/
int main () {
    int64_t sum = 1, m = 20;
    for (int i = 40; i > 20; i--) {
        sum *= i;
        while (sum % m == 0 && m != 1) {
            sum /= m;
            --m;
        }

    }
    printf("%"PRId64"\n", sum);

    return 0;
}

