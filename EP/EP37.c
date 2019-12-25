/*************************************************************************
	> File Name: EP37.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月22日 星期日 19时58分42秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

#define MAX_N 1000000
int prime[MAX_N + 5] = {0}, is_prime[MAX_N + 5] = {1, 1, 0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}

int is_val(int num) {
    int digit = floor(log10(num)) + 1;
    int temp1 = num,  temp2 = num;
    for (int i = 1; i < digit; i++) {
        temp1 /= 10;
        if (is_prime[temp1]) return 0;
    }
    for (int i = 1; i < digit; i++) {
        int temp = temp2 % (int)pow(10, i);
        if (is_prime[temp]) return 0;
    }
    return 1;
}

int main() {
    init();
    int cnt = 11, sum = 0;
    for (int i = 1; i <= prime[0]; i++) {
        if (prime[i] < 10) continue;
        if (is_val(prime[i])) sum += prime[i], cnt--;
        if (!cnt) break;
    }
    printf("%d", sum);
    return 0;
}
