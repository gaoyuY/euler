/*************************************************************************
	> File Name: /home/gaoyu/euler/euler04-1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月22日 星期日 09时26分28秒
 ************************************************************************/

#include<stdio.h>
int jude (int num) {
    int x = 0;
    int n = num;
    while(num) {
        x = x * 10 + num % 10;
        num /= 10;
    }
    return x == n;
}

int main() {
    int i,j;
    int sum = 0;
    for (i = 100; i < 1000; i++) {
        for (j = i; j < 1000; j++) {
            if(i * j < sum)  continue;
            if (!jude(i * j))  continue;
            sum = i * j;
        }
    }
    printf("%d\n", sum);
    return 0;
}
