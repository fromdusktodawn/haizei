/*************************************************************************
	> File Name: EP02.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月15日 星期日 15时20分49秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#define max_n 44
#define N 4000000
//int fib[max_n + 5];

int main() {
    /* 方法一 */
    //fib[1] = 1, fib[2] = 2;
    //int sum = 2;
    //for (int i = 3; i <= max_n && fib[i - 1] + fib[i - 2] <= N; i++) {
    //    fib[i] = fib[i - 1] + fib[i - 2];
    //    if (fib[i] & 1) continue;
    //    sum += fib[i];
    //}
    /* 方法二 */
    //int sum = 0;
    //int a = 0, b = 1;
    //while (a + b <= N) {
    //    b = a + b;
    //    a = b - a;
    //    if (b & 1) continue;
    //    sum += b;
    //}
    /* 方法三 */
    int fib[3] = {0, 1};
    int sum = 0, n = 2;
    while (fib[(n - 1) % 3] + fib[(n - 2) % 3] <= N) {
        fib[n % 3] = fib[(n - 1) % 3] + fib[(n - 2) % 3];
        if (!(fib[n % 3] & 1)) sum += fib[n % 3];
        n += 1;
    }
    printf("%d", sum);
    return 0;
}
