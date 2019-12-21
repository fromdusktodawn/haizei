/*************************************************************************
	> File Name: EP14.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月21日 星期六 14时08分13秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

#define max_n 1000000
#define size 1000000
int keep[max_n + 5] = {0};
long long get_len(long long n) {
    if (n == 1) return 1;
    if (n <= size && keep[n]) return keep[n];
    long long ret = 0;
    if (!(n & 1)) ret = (get_len(n >> 1) + 1);
    else ret = (get_len(3 * n + 1) + 1);
    if (n <= size) keep[n] = ret;
    return ret;
}

int main() {
    long long ans = 0, len = 0;
    for (int i = 1; i <= max_n; i++) {
        long long tmp = get_len(i);
        if (tmp > len) {
            ans = i;
            len = tmp;
        }
    }
    printf("num = %d, len = %d\n", ans, len);
    return 0;
}
