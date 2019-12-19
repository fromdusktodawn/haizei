/*************************************************************************
	> File Name: EP30.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月15日 星期日 19时37分09秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#include <math.h>
#define max_n 354295

int is_val(int n) {
    int x = n, temp = 0;
    while (x) {
        temp += (int)pow(x % 10, 5);
        x /= 10;
    }
    return temp == n;
}

int main() {
    int sum = 0;
    for (int i = 2; i <= max_n; i++) {
        if (is_val(i)) {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}
