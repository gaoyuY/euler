/*************************************************************************
	> File Name: mZ 2018年07月29日 星期日 09时49分12秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
int64_t Pentagonal(int64_t n) {
    return n * (3 * n - 1) / 2;
}
int64_t  Hexagonal(int64_t n) {
    return n * (2 * n - 1);
}
int64_t binary_search(int64_t n, int64_t x) {
    int64_t head = 0,tail = n - 1, mid;
    while (head <= tail ) {
        mid = (head + tail) / 2;
        if (Pentagonal(mid) == x) return 1;
        if (Pentagonal(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int main () {
    int64_t n = 144;
    while (!binary_search(2 * n, Hexagonal(n)))  
        ++n;

    printf ("%"PRId64"\n", Hexagonal(n));
    return 0;
}
