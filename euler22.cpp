/*************************************************************************
> File Name: euler22.c
> Author: 
> Mail: 
> Created Time: 2018年07月30日 星期一 17时19分36秒
************************************************************************/
#include <iostream>
#include <stdio.h>
#include <inttypes.h>
#include <algorithm>
#include "22.h"
using namespace std;
int32_t main() {
    int64_t i = 0, sum, total = 0;
    while (nameList[i++].length() != 0) ;
    sort(nameList, nameList + i - 1);
    i = 0;
    while (nameList[i].length() != 0) {
        sum = 0;
        for (int32_t j = 0; j < nameList[i].length(); j++) {
            sum += nameList[i][j] - 'A' + 1;
        }
        total += sum * (++i);
    }
    printf("%" PRId64"\n", total);
    return 0;
}


