/*************************************************************************
	> File Name: euler33.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月28日 星期六 10时41分15秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
int32_t gcd(int32_t a, int32_t  b) {
    if (!b) return a;
     return gcd(b, a % b);
}

int is_gcd(int32_t x, int32_t y) {
    int32_t x1 = x / 10;
    int x2 = x % 10;
    int32_t y1 = y / 10;
    int y2 = y % 10;
    if (x > 100 || x < 10)  return 0;
    if (y > 100 || y < 10)  return 0;    
    if (!x1 || !x2 || !y1 || !y2) return 0;
    if (x2 == y1 && x1 * y == y2 * x && x1 != 0) return 1;
    if (x2 == y2 && x1 * y == y1 * x && x1 != 0) return 1;    
    if (x1 == y1 && x2 * y == y2 * x && x2 != 0) return 1;
    if (x1 == y2 && x2 * y == y1 * x && x2 != 0) return 1; 
    return 0;
}
int main () {
    int32_t a = 1;
    int32_t b = 1;
    int32_t c;
    for (int i = 10; i <= 100; i++) {
        for (int j = i + 1; j <= 100; j++) {
           
            if (!is_gcd(i,j)) continue;
            
                a *= i;
                b *= j;
                c = gcd(a, b);
                a /= c;
                b /= c;
            
        } 
    }

    printf("%d\n", b);

    return 0;
}
