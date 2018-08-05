/*************************************************************************
	> File Name: euler32.c
    > Author: 
	> Mail: 
	> Created Time: 2018年07月27日 星期五 14时31分55秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 10000
int get_digit(int a, int *num) {
    while (a) {
        if (a % 10 == 0 )  return 0;
        if (num[a % 10])   return 0;
        return 1;
    }
}
int  is_valid(int a, int b, int c) {
    int num[10] = {0};
    if (!get_digit(a, num))  return 0;
    if (!get_digit(b, num))  return 0;
    if (!get_digit(c, num))  return 0;
    return 1;


}

int digit (int a) {
    return floor(log10(a)) + 1;
}
int valid[MAX_N] = {0};
int main () {
    int ans = 0;// 满足条件的乘积和
    for (int a = 2; digit(a) + digit(a) + digit(a * a) <= 9; a++) {
        for (int b = a + 1; digit(a) +digit(b) + digit(a * b) <= 9; b++) {
            if (digit(a) + digit(b) + digit( a * b ) < 9) continue;
            if (is_valid(a, b, a * b)) {
                ans += a * b + (1 - valid[a * b]);
                valid[a * b] = 1;
               // printf ("%d * %d = %d\n", a, b, a * b);
            }
        }
    }

    printf ("%d\n", ans);
    return 0;
}
