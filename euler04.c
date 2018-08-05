/*************************************************************************
	> File Name: /home/gaoyu/euler/euler04.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月21日 星期六 20时14分15秒
 ************************************************************************/

#include<stdio.h>
int huiwen (int num) {
    int m = 0;
    int n = num;
        while(n) {
            m = m * 10 + n % 10;
            n /= 10; 
        }
        if (m == num) {
            return 1;
        }
        return 0;
    }
    
int main () {

    int i, j;
    int tep = 100, l = 0;
    for (i = 999; i >= tep; i--) {
        for (j = i; j >= 100; j--) {
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
