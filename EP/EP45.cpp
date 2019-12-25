/*************************************************************************
	> File Name: EP45.cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月24日 星期二 19时55分02秒
 ************************************************************************/

#include <iostream>
using namespace std;

long long Triangle(long long n) {
    return n * (n + 1) / 2;
}

long long Pentagonal(long long n) {
    return n * (3 * n - 1) / 2;
}

long long Hexagonal(long long n) {
    return n * (2 * n - 1);
}

long long binary_search(long long (*num)(long long), long long n, long long x) {
    long long head = 1, tail = n - 1, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (num(mid) == x) return mid;
        if (num(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return -1;
} 

int main() {
    long long n = 144;
    while (binary_search(Pentagonal, 2 * n, Hexagonal(n)) == -1) n += 1;
    cout << Hexagonal(n) << endl;
    return 0;
}
