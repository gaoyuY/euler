/*************************************************************************
	> File Name: euler44.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月27日 星期五 16时29分12秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
int64_t pentagonal (int64_t n) {
    return n * (3 * n - 1) / 2;
}

int64_t is_pentagonal (int64_t x) {
    int64_t head = 1;
    int64_t tail = 5000000000;
    int64_t mid;
    while (head <= tail) {
        mid = (head + tail) / 2;
        if (pentagonal(mid) == x) return 1;
        if (pentagonal(mid) < x)  head = mid + 1;
        else tail = mid - 1;
    }

    return 0;
}

int main () {
    int64_t i = 1, j = 1, ans = INT64_MAX;
    while (pentagonal(j + 1) - pentagonal(j) < ans) {
        j++;
        i = j - 1;
        do {
            if (is_pentagonal(pentagonal(j) + pentagonal(i))) {
                if (is_pentagonal(pentagonal(j) - pentagonal(i))) {
                    if (pentagonal(j) - pentagonal(i) < ans) {
                        ans = pentagonal(j) - pentagonal(i);
                       // printf("%" PRId64 " -> %" PRId64 "\n", pentagonal(j), pentagonal(i));
                    }
                }
            }
            i--;
        }while (i >= 1 && pentagonal(j) - pentagonal(i) < ans);
    }

    printf("%" PRId64"\n", ans);

    return 0;
}
