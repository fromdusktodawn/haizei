/*************************************************************************
	> File Name: EP32.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月22日 星期日 16时20分45秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#define MAX_N 10000

int add_to_num(int *num, int n) {
    while (n) {
        if (num[n % 10]) return 0;
        num[n % 10] += 1;
        n /= 10;
    }
    return 1;
}

int digits(int n) {
    if (n == 0) return 1;
    return floor(log10(n)) + 1;
}


int is_val(int a, int b) {
    if (digits(a) + digits(b) + digits(a * b) - 9) return 0;
    int num[10] = {1, 0}, flag = 1;
    flag = flag && add_to_num(num, a);
    flag = flag && add_to_num(num, b);
    flag = flag && add_to_num(num, a * b);
    return flag;
}

int keep[MAX_N + 5] = {0};

int main() {
    int sum = 0;
    for (int a = 1; a < 100; a++) {
        for (int b = a + 1; b < 10000; b++) {
            if (!is_val(a, b)) continue;
            if (keep[a * b]) continue;
            sum += a * b;
            keep[a * b] = 1;
        }
    }
    printf("%d\n", sum);
    return 0;
}
