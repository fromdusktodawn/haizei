/*************************************************************************
	> File Name: EP18.cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月28日 星期六 16时18分17秒
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 15

int val[MAX_N + 5][MAX_N + 5];
int keep[MAX_N + 5][MAX_N + 5];
int dfs(int i, int j, int n) {
    if (i + 1 == n) return val[i][j];
    if (keep[i][j]) return keep[i][j];
    int val1 = dfs(i + 1, j, n);
    int val2 = dfs(i + 1, j + 1, n);
    return keep[i][j] = (val1 > val2 ? val1 : val2) + val[i][j];
}

int main() {
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> val[i][j];
        }
    }
    for (int i = MAX_N + 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            val[i][j] += max(val[i + 1][j], val[i + 1][j + 1]);
        }
    }
    cout << val[0][0];
    //cout << dfs(0, 0, MAX_N);
    return 0;
}
