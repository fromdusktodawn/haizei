/*************************************************************************
	> File Name: EP34.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月15日 星期日 20时03分21秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

#define max_n 2903040

int keep[10] = {1};

void fac() {
    for (int i = 2; i <= 9; i++) {
        keep[i] = i * keep[i - 1];
    }
    return ;
}

//int f(int n) {
//    if (keep[n]) return keep[n]
//    int ans = 1;
//    for (int i = 1; i <= n; i++) 
//        ans *= i;
//    return keep[n] = ans;
//}

int is_val(int n) {
    int x = n, temp = 0;
    while (x) {
        temp += keep[x % 10];
        x /= 10;
    }
    return n == temp;
}

int main() {
    fac();
    int sum = 0;
    for (int i = 3; i <=max_n; i++) {
        if (is_val(i)) sum += i;
    }
    printf("%d", sum);
    return 0;
}
