/*************************************************************************
	> File Name: /home/gaoyu/euler/euler30-1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月23日 星期一 11时46分40秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 354294 
int equal (int num){
    int temp = num, sum = 0;
    while (num) {
        sum += pow(num % 10, 5);
        num /= 10;
    }
    if (temp == sum) return  1;
    return 0;
} 


int main () {
    int ans = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if(!equal(i)) continue;
        ans += i;
    }

    printf("%d\n", ans);
    return 0;
}
