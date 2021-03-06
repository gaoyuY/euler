/*************************************************************************
	> File Name: euler12.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月30日 星期一 14时22分55秒
 ************************************************************************/
 /*题目
The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1+2+ 3 + 4 + 5 + 6 + 7 =28. The first ten terms would be:1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ... We can see that 28 is the first triangle number to have over five divisors.What is the value of the first triangle number to have over five hundred divisors?
  答案：76576500
  */
#include<stdio.h>
#define MAX_N 100000 
int prime[MAX_N + 5] = {0};
int dnum[MAX_N + 5]= {0};//因子的个数
int min_num[MAX_N + 5] ={0};//最小素因子的幂次
void Prime() {
    for (int i = 2; i * 2 <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            dnum[i] = 2;
            min_num[i] = 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                min_num[i * prime[j]] = min_num[i] + 1;
                dnum[i * prime[j]] = dnum[i] / (min_num[i] + 1) * (min_num[i] + 2);
                break;
            }else {
                min_num[i * prime[j]] = 1;
                dnum[i * prime[j]] = dnum[i] * dnum[prime[j]];
            }

        }
    }
    return;
}
int factor_nums(int n) { //三角形数的因子个数函数
    if (n % 2 == 0) {
        return dnum[n / 2] * dnum[n + 1];
    }
    return dnum[n] * dnum[(n + 1) / 2];
}

int main () {
    Prime();
    int n = 1;
    while (factor_nums(n) < 500) ++n;
    printf("%d\n", n * (n + 1) / 2);

    return 0;
}

