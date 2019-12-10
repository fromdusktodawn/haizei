/*************************************************************************
	> File Name: n的阶乘.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月07日 星期六 14时45分20秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int fac(int n) {
    if (!n) return 1;
    return n * fac(n - 1);
}

int fac2(int n) {
    return (1 + n) * n / 2;
}

int g(int (func1)(int), int (func2)(int), int x) {
    if (x < 5) return func1(x);
    else return func2(x);
}

int main() {
    int n;
    while (~scanf("%d", &n)) {
        printf("f(%d) = %d\n", n, g(fac, fac2, n));
    }
    return 0;
}
