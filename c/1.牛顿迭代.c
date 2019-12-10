/*************************************************************************
	> File Name: 牛顿迭代.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月10日 星期二 20时20分46秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#define EPSL 1e-6
double F(double x) {
    return x * x - 2;
}

double f(double x) {
    return 2 * x;
}

double NewTon(double (*F)(double), double (*f)(double)) {
    double x = 1.0;
    while (fabs(F(x)) > EPSL) {
        x -= F(x) / f(x);
    }
    return x;
}

int main() {
    printf("%lf\n", NewTon(F, f));
    return 0;
}
