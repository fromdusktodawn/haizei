/*************************************************************************
	> File Name: EP03.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月15日 星期日 16时24分41秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#define N 600851475143LL

int main() {
    long long ans = 0, M = N;
    long long i = 2;
    while (i * i <= M) {
        if (M % i == 0)  ans = i;
        while (M % i == 0) M /= i;
        i += 1;
    }
    if (M > 1) ans = M;
    printf("%lld\n", ans);
    return 0;
}
