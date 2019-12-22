/*************************************************************************
	> File Name: EP31.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月22日 星期日 14时33分31秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

#define MAX_N 8
#define MAX_M 200

int w[MAX_N + 5] = {
    0, 1, 2, 5, 10, 20, 50, 100, 200
};
//int f[MAX_M  + 5] = {0};
int f(int n, int m);

int main() {
    //for (int i = 0; i < MAX_N; i++) {
    //    f[0] = 1;
    //    for (int j = 1; j <= MAX_M; j++) {
    //        if (j >= w[i]) f[j] += f[j - w[i]];
    //    }
    //}
    //printf("%d\n", f[MAX_M]);
    printf("%d", f(MAX_N, MAX_M));
    return 0;
}

int f(int n, int m) {
    if (m == 0 || n == 1) return 1;
    if (m >= w[n]) return f(n - 1, m) + f(n, m - w[n]);
    else return f(n - 1, m);
}
