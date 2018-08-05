/*************************************************************************
	> File Name: euler03.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月20日 星期五 15时27分46秒
 ************************************************************************/
#include<stdio.h>
#include <inttypes.h>
#define NUM 600851475143
int main () {
    int64_t num = NUM, n = 2, ans = 0;
    while (n * n <= num) {
        if (num % n == 0) ans = n; 
        while (num % n == 0) num /= n;
        n += 1;
    }
    //printf("%d\n", num);
    if (num != 1) ans = num;
    printf("%" PRId64 "\n", ans);
    return 0;
}
/*
#include<stdio.h>
#define NUM 5
int main(){
    int num = NUM, n = 2, ans = 0;
    while(n * n <= num) {
        if(num % n == 0) ans = n;
        while (num % n == 0) num /= n;
        n += 1;
    }
    if (num != 1) ans = num;
    printf("%d\n", ans);
    return 0;
}*/
