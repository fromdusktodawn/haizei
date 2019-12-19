/*************************************************************************
	> File Name: EP05.cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月17日 星期二 18时35分57秒
 ************************************************************************/

#include <cstdio>

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    int ans = 1;
    for (int i = 1; i <= 20; i++) {
        if (ans % i == 0) continue;
        ans *= i / gcd(ans, i);
    }
    printf("%d\n", ans);
    return 0;
}
