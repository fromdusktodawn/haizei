/*************************************************************************
	> File Name: EP35.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月22日 星期日 18时59分01秒
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

int check(int n, int num);
int is_val(int x) {
    int n = x;
    int digit = floor(log10(n)) + 1;
    return check(x, digit);
}
int check(int n, int digit) {
    for (int i = 1; i <= digit; i++) {
        int last = (n % 10);
        n /= 10;
        n += last * pow(10, dight - 1);
        if (is_prime[n]) return 0;
    }
    return 1;
}

//int is_val(int n) {
//    int digit = floor(log10(n)) + 1;
//    int h = (int)pow(10, digit - 1);
//    int temp = n;
//    for (int i = 1; i < digit; i++) {
//        temp = (temp % 10) * h + temp / 10;
//        if (is_prime[temp]) return 0;
//    }
//    return 1;
//}


int main() {
    init();
    int sum = 0;
    for (int i = 1; i <= prime[0]; i++) {
        sum += is_val(prime[i]);
    }
    printf("%d\n", sum);
    return 0;
}
