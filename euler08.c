/*************************************************************************
	> File Name: euler08.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月24日 星期二 11时40分49秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#include<string.h>
char num[1005] = {0};
char temp[1005] = {0};
int main () {
    while(scanf("%s", temp) !=EOF) {
        strcat(num,temp);
    }
    int64_t p = 1, zero = 0, ans = 0;

    for (int i = 0; num[i]; i++) {
        if (num[i] == '0') {
            zero += 1;
        }else {
            p *= (num[i] - '0');
        }
        if (i >= 13) {
            if (num[i - 13] == '0') {
                zero -= 1;
            }else {
                p /= (num[i - 13] == '0'); 
            }
        }
        if (zero == 0 && p >ans)  ans = p;
    }
    printf("%" PRId64 "\n", ans);

    return 0;
}
