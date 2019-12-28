/*************************************************************************
	> File Name: EP24.cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月28日 星期六 19时21分19秒
 ************************************************************************/

#include <iostream>
using namespace std;




#define MAX_N 10

int num[MAX_N + 5];
int fac[MAX_N + 5]; 


void init(int n) {
    fac[0] = 1;
    num[0] = 1;
    for (int i = 1; i <= n; i++) {
        fac[i] = i * fac[i - 1];
        num[i] = 1;
    }
    return ;
}

int get_num(int k, int n, int &x) {
    int step = k / n;
    x = 0;
    for (int t = 0; t <= step; x += (t <= step)) {
        t += num[x];
    }
    k %= n;
    num[x] = 0;
    return k;
}

int main() {
    init(MAX_N);
    int k = 1000000 - 1;
    for (int i = MAX_N; i > 0; i--) {
        int x;
        k = get_num(k, fac[i - 1], x);
        cout << x;
    }
    cout << endl;
    return 0;
}
