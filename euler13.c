/*************************************************************************
	> File Name: euler13.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月27日 星期五 08时43分29秒
 ************************************************************************/
 /*题目
  * Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.
  * 答案：5537376230
  * */

#include <stdio.h>
#include <string.h>

char num[55];
int ans[55] = {1, 0};

int main() {
    for (int i = 0; i < 100; i++) { // 将数字当成字符存入
        scanf("%s", num);
        int len = strlen(num);
        if (ans[0] < len) ans[0] = len;
        for (int j = 0; j < len; j++) {//大数加法
            ans[len - j] += (num[j] - '0');        
        }
        for (int j = 1; j <= ans[0]; j++) {//大数加法进位运算
            if (ans[j] < 10) continue;
            ans[j + 1] += ans[j] / 10;
            ans[j] %= 10;
            ans[0] += (j == ans[0]);        
        }
            
    }
    for (int i = ans[0]; i > ans[0] - 10; i--) {
        printf("%d", ans[i]);    
    }
        printf("\n");
        return 0;

}
