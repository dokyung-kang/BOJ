#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int f[40];
int cnt1 = 0;
int cnt2 = 0;
int fib(int n) {
    if (n == 1 || n == 2){
        cnt1++;
        return 1;  // 코드1
    }
    else 
        return (fib(n - 1) + fib(n - 2));
}

 int fibonacci(int n) {
     int i;

     f[1] = f[2] = -1;
     for (i = 3; i <= n; i++) {
         cnt2++;
         f[i] = f[i - 1] + f[i - 2];  // 코드2
     }
     return f[n];
 }

 int main(void)
 {
     int n;

     scanf("%d", &n);

     fib(n);
     fibonacci(n);
     
     printf("%d %d", cnt1, cnt2);
 }