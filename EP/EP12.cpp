/*************************************************************************
	> File Name: EP12.cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月26日 星期四 19时49分40秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 10000000
int prime[MAX_N + 5] =  {0};
int f[MAX_N + 5] = {0};
int cnt[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            f[i] = 2;
            cnt[i] = 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                f[i * prime[j]]  = f[i] / (cnt[i] + 1) * (cnt[i] + 2);
                cnt[i * prime[j]] = cnt[i] + 1;
                break;
            } else {
                f[prime[j] * i] = f[prime[j]] * f[i];
                cnt[prime[j] * i] = 1;
            }
        }
    }
    return ;
}

int main() {
    init();
    int n = 0, fac = 0;
    while (fac < 500) {
        n++;
        if (n & 1) {
            fac = f[n] * f[(n + 1) / 2];
        } else {
            fac = f[n / 2] * f[n + 1];
        }
    }
    cout << n * (n + 1) / 2 << endl;
    return 0;
}
