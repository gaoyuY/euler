/*************************************************************************
	> File Name: euler44-pra1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月28日 星期六 16时06分54秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int stere(int m) {
        return m * m * m;
}

int is_stere(int n) {
        int head = 1;
        int tail;
        int mid;
        tail = n;
    if (n == 0)  return 1;
    while (head <= tail) {
        mid = (head + tail) / 2;
            if (stere(mid) == n) return 1;
            if (stere(mid) < n) head = mid + 1;
        else tail = mid - 1;
     }
        return 0;

}
int main () {
        int n;
    while(~scanf("%d", &n)){
        if (is_stere(fabs(n))) 
            printf("Yes\n");
        else
            printf("NO\n");
            
    }

        return 0;

}
