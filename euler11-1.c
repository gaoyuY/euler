/*************************************************************************
	> File Name: euler11-1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月24日 星期二 14时31分06秒
 ************************************************************************/
 /*题目
  　In the 20×20 grid below, four numbers along a diagonal line have been marked in red.(数据省略)
    The product of these numbers is 26 × 63 × 78 × 14 = 1788696.
    What is the greatest product of four adjacent numbers in the same direction (up, down, left, right, or diagonally) in the 20×20 grid?
    答案：70600674
    */

#include<stdio.h>
int dir_arr[4][2] = {  //定义四个方向数组
    1,1,1,-1,
    0,1,-1,0
};
int main () {
    int num[30][30] = {0};
    for (int i = 5; i < 25; i++) {  //数组开大，防止出界无法计算
        for (int j = 5; j < 25; j++) {
            scanf ("%d", num[j] + i);  //输入数据
        }
    }
   /* for (int i = 5; i < 25; i++) {
        for (int j = 5; j < 25; j++) {
            printf ("%d ",num[i][j]);
        }
       printf("\n");
    }
    printf("\n");*/
    int ans = 0;
    for (int i = 5; i < 25; i++) {
        for  (int j = 5; j < 25; j++) {
            for (int k = 0; k < 4; k++) { //表示四个方向
                int p = 1;
                for (int step = 0; step < 4; step++) {//表示四个数连乘
                    int xx = i + step * dir_arr[k][0];
                    int yy = j + step * dir_arr[k][1];
                    p *= num[xx][yy];  // 表示四个数连乘乘积
                }
                if (p > ans)//找最大乘积
                    ans = p;
            }
            
        }
    }
    printf("%d\n", ans);

    return 0;

}
