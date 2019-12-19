/*************************************************************************
	> File Name: EP04.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月15日 星期日 18时11分50秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int is_val(int n, int base) {
    int x = n, tmp = 0;
    while (x) {
        tmp = tmp * base + x % base;
        x /= base;
    }
    return tmp == n;
}

int main() {
    int ans = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            if (is_val(i * j, 10) && i * j > ans) ans = i * j;
        }
    }
    printf("%d", ans);
    return 0;
}
