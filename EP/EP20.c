/*************************************************************************
	> File Name: EP20.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月22日 星期日 20时43分50秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int num[300 + 5] = {1, 1};

int main() {
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= num[0]; j++) {
            num[j] *= i;
        }
        for (int j = 1; j <= num[0]; j++) {
            if (num[j] < 10) continue;
            num[j + 1] += num[j] / 10;
            num[j] %= 10;
            num[0] += (j == num[0]);
        }
    }
    int sum = 0;
    for (int i = 1; i <= num[0]; i++) {
        sum += num[i];
    }
    printf("%d", sum);
}
