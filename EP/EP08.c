/*************************************************************************
	> File Name: EP08.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月19日 星期四 18时07分05秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#include <string.h>

#define MAX_N 1000

char num[MAX_N + 5];

int main() {
    int len = 0;
    while (~scanf("%s", num + len)) len += strlen(num + len);
    long long ans = 0, p = 1, zero = 0;
    for (int i = 0; num[i]; i++) {
        num[i] -= '0';
        if (num[i]) p *= num[i];
        else zero += 1;
        if (i < 13) continue;
        if (num[i - 13]) p /= num[i - 13];
        else zero -= 1;
        if (zero == 0 && p > ans) ans = p;
    }
    printf("%lld\n", ans);
    return 0;
}
