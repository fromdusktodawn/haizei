/*************************************************************************
	> File Name: n边型数.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月07日 星期六 15时25分15秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>



int64_t Triangle(int64_t n) {
    return n * (n + 1) / 2;
}

int64_t Pentagonal(int64_t n) {
    return n * (3 * n - 1) / 2;
}

int64_t Hexagonal(int64_t n) {
    return n * (2 * n - 1);
}

int64_t binary_search(int64_t (*func)(int64_t), int64_t n) {
    int64_t head = 1, tail = n, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (func(mid) == Triangle(n)) return mid;
        if (func(mid) < Triangle(n)) head = mid + 1;
        else tail = mid - 1;
    }
    return -1;
}

int64_t main() {
    int64_t n = 286;
    for (;; n++) {
        if (binary_search(Pentagonal, n) == -1) continue;
        if (binary_search(Hexagonal, n) == -1) continue;
        printf("%lld\n", Triangle(n));
        break;
    }
    return 0;
}
