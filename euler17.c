/*************************************************************************
	> File Name: euler17.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月26日 星期四 11时23分16秒
 ************************************************************************/

#include<stdio.h>
int a[20] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
int b[10] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};
int word(int i) {
    if (i < 20) return a[i];
    if (i < 100) return b[i / 10] + a[i % 10];
    if (i < 1000) {
        if (i % 100 == 0)  return a[i / 100] + 7;
        else return a[i / 100] + 7 + 3 + word(i % 100); 
    } 
    return 11;
}



int main () {
    int sum = 0;

    for (int j = 1; j <= 1000; j++) {
        sum += word(j);
    }

    printf ("%d\n", sum);

    return 0;

}
