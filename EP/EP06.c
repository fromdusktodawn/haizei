/*************************************************************************
	> File Name: EP06.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月15日 星期日 18时31分12秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int main() {
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= 100; i++) {
        sum1 += i;
        sum2 += i * i;
    }
    printf("%d", sum1 * sum1 - sum2);
    return 0;
}
