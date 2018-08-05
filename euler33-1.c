/*************************************************************************
	> File Name: euler33-1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月28日 星期六 11时23分18秒
 ************************************************************************/

#include <stdio.h>

#include <inttypes.h>

 

 int32_t gcd(int32_t a, int32_t b) {
     
         if (!b) return a;

         return gcd(b, a % b);


 }

  
 int  IsNonTrivial(int32_t x, int32_t y) {
      
          if (x > 100 || x < 10) return 0;

          if (y > 100 || y < 10) return 0;

          int32_t x1, x2, y1, y2;

          x1 = x / 10; x2 = x % 10;

          y1 = y / 10; y2 = y % 10;

          if (!x1 || !x2 || !y1 || !y2) return 0;

          if (x1 == y1 && x2 * y == y2 * x && x2 != 0) return 1;

          if (x1 == y2 && x2 * y == y1 * x && x2 != 0) return 1;

          if (x2 == y2 && x1 * y == y1 * x && x1 != 0) return 1;

          if (x2 == y1 && x1 * y == y2 * x && x1 != 0) return 1;

          return 0;


  }

   

   int32_t main() {
       
           int32_t x = 1, y = 1, c;

       for (int32_t i = 10; i <= 100; i++) {
           
           for (int32_t j = i + 1; j <= 100; j++) {

                           if (IsNonTrivial(i, j) == 0) continue;

                           x *= i; y *= j;

                           c = gcd(x, y);

                           x /= c; y /= c ;

                       
           }

               
       }

           printf("%d\n", y); 

           return 0;


   }
