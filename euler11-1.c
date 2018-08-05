/*************************************************************************
	> File Name: euler11-1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月24日 星期二 14时31分06秒
 ************************************************************************/

#include<stdio.h>
int dir_arr[4][2] = {
    1,1,1,-1,
    0,1,-1,0
};
int main () {
    int num[30][30] = {0};
    for (int i = 5; i < 25; i++) {
        for (int j = 5; j < 25; j++) {
            scanf ("%d", num[j] + i);
        }
    }
    for (int i = 5; i < 25; i++) {
        for (int j = 5; j < 25; j++) {
            printf ("%d ",num[i][j]);
        }
       printf("\n");
    }
    printf("\n");
    int ans = 0;
    for (int i = 5; i < 25; i++) {
        for  (int j = 5; j < 25; j++) {
            for (int k = 0; k < 4; k++) {
                int p = 1;
                for (int step = 0; step < 4; step++) {
                    int xx = i + step * dir_arr[k][0];
                    int yy = j + step * dir_arr[k][1];
                    p *= num[xx][yy];
                }
                if (p > ans)
                    ans = p;
            }
            
        }
    }
    printf("%d\n", ans);

    return 0;
}
