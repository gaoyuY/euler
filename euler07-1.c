/*************************************************************************
	> File Name: /home/gaoyu/euler/euler07-1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月22日 星期日 19时27分34秒
 ************************************************************************/

#include<stdio.h>
int is_prime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)  return 0;
    }
    return 1;
}

int main () {
    int n = 0; 
    int num = 1;
    do{
        num += 1;
        while(!is_prime(num))  num++;
        n += 1;
    }while(n < 10001);
    printf("%d\n", num);
    return 0;
}
