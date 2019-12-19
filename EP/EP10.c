/*************************************************************************
	> File Name: EP10.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月19日 星期四 18时48分33秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

#define max_n 2000000
int prime[max_n + 5] = {0};
void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0] && i * prime[j] <= max_n; j++) {
            prime[i * prime[j]] = 1;
            if (!(i % prime[j])) break;
        }
    }
    return ;
}

int main() {
    init();
    long long ans = 0;
    for (int i = 1; i <= prime[0]; i++) {
        ans += prime[i];
    }
    printf("%lld", ans);
    return 0;
}
