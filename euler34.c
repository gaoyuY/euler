/*************************************************************************
	> File Name: /home/gaoyu/euler/euler34.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月23日 星期一 09时09分03秒
 ************************************************************************/

#include<stdio.h>
#define MAX_n 2540160

int main() {
    int num[15] = {1,1};
    for (int i = 2; i < 10; i++) {
        num[i] = num[i - 1] * i;
    }
    int ans = 0;
    for (int i = 3; i < MAX_n; i++) {
        int temp = i;
        int sum = 0;
        while (temp) {
            sum += num[temp % 10];
            temp /= 10;
        }
        if (sum == i) {
            ans += sum;
        }
    }
    printf("%d\n", ans);

    return 0;
}
    
