/*******************************************************************mZ*****mZ	> File Name: /home/gaoyu/euler/euler30.cmZmZ
	> Created Time: 2018年07月22日 星期日 10时47分24秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX 354294
int is_equal(int x) {
    int  temp = x;
    int sum = 0;
    while (x) {
        sum += (int)pow(x % 10, 5);
        x /= 10;
    }
    return sum == temp;
}





int main () {
    int i;
    int ans = 0;
    for (i = 2; i < MAX; i++) {
        if(!is_equal(i)) continue;
        ans +=i;
    }
    printf("%d\n", ans);

    return 0;
}
