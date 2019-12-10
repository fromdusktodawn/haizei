/*************************************************************************
	> File Name: ex_gcd.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月07日 星期六 20时10分33秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int ex_gcd(int a, int b, int *x, int *y) {
    if (!b) {
        *x = 1, *y = 0;
        return a;
    }
    /*太tm难理解了*/
    int ret = ex_gcd(b, a % b, y, x);
    *y -= a / b * (*x)
    /*下面是原版*/
    //int xx, yy, ret = ex_gcd(b, a % b, xx, yy);
    //*x = yy;
    //*y = xx - a % b * yy;
    return ret;
}

int main() {
    int a, b, x, y;
    while (~scanf("%d%d", &a, &b)) {
        printf("gcd(%d, %d) = %d\n", a, b, ex_gcd(a, b, &x, &y));
        printf("%d * %d + %d * %d = %d\n", a, x, b, y, a * x + b * y);
    }
    return 0;
}
