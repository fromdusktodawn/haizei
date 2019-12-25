/*************************************************************************
	> File Name: EP38.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月24日 星期二 18时22分44秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int digits(long long n) {
    if (n == 0) return 1;
    return floor(log10(n)) + 1;
}

int calc(int x) {
    long long n = 1, ans = 0;
    while (digits(ans) < 9) {
        ans *= pow(10, digits(x * n));
        ans += n * x;
        n += 1;
    } 
    if (digits(ans) - 9) return 0;
    int num[10] = {1, 0};
    int temp = ans;
    while (temp) {
        if (num[temp % 10]) return 0;
        num[temp % 10] += 1;
        temp /= 10;
    }
    return ans;
}

int main() {
    long long ans = 0;
    for (int i = 1; i < 10000; i++) {
        int temp = calc(i);
        if (temp > ans) ans = temp;
    }
    printf("%lld", ans);
    return 0;
}
