/*************************************************************************
	> File Name: EP33.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月22日 星期日 18时06分21秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int sumi = 1, sumj = 1;
int gcd(int a, int b) {
    return (b == 0 ? a : gcd(b, a % b));
}

void equal(int i, int j, int x, int y) {
    if (!(i * y == j * x)) return ;
    sumi *= i;
    sumj *= j;
    return;
}

void solve(int i, int j) {
    int a = i / 10, b = i % 10, c = j / 10, d = j % 10;
    if (!(a && b)) return ;
    if (!(c && d)) return ;
    if (a == c) {
        equal(i, j, b, d);
    } else if (a == d) {
        equal(i, j, b, c);
    } else if (b == c) {
        equal(i, j, a, d);
    } else if (b == d) {
        equal(i, j, a, c);
    } else {
        return ;
    }
    return ;
}

int main() {
    for (int i = 10; i < 100; i++) {
        for (int j = i + 1; j < 100; j++) {
            solve(i, j);
        }
    }
    printf("%d", (sumj / gcd(sumi, sumj)));
    return 0;
}
