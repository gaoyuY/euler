/*************************************************************************
	> File Name: euler14.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月24日 星期二 15时45分23秒
 ************************************************************************/
 #include<stdio.h>
 #include<inttypes.h>
 #define MAX_N 1000000
 #define KEEp_RANGE 2000000

 int keep[KEEp_RANGE + 5] = {0};
 int get_len(int64_t x) {
         int ans;
         if (x == 1)  return 1;
         if (x <= KEEp_RANGE && keep[x]) return keep[x];
         if (x % 2 == 0)  ans = get_len( x / 2  ) + 1;
     else {
                 ans = get_len(3 * x + 1) + 1;
             
     }
         if (x <= KEEp_RANGE) 
             keep[x] = ans;

         return ans;

 }
 int main () {
         int max = 0;
     for (int i = 1; i <= MAX_N; i++) {
                 int len_ans = get_len(i);
         if (max < len_ans) {
                         max = len_ans;
                     
         }
             
     }


         printf("%d\n", max);


         return 0;

 }
