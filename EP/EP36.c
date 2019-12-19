/*************************************************************************
	> File Name: EP36.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月15日 星期日 20时48分32秒
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
    int sum = 0;
    for (int i = 1; i < 1000000; i++) {
        if (is_val(i, 10) && (is_val(i, 2))) {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}
