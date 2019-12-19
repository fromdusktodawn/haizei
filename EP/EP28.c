/*************************************************************************
	> File Name: EP28.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月15日 星期日 19时21分32秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int main() {
    int sum = 1;
    for (int l = 3; l <= 1001; l += 2) {
        sum += 4 * l * l - 6 * l + 6;
    }
    printf("%d\n", sum);
}
