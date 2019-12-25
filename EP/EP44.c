/*************************************************************************
	> File Name: EP44.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月24日 星期二 18时43分30秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

long long Pentagonal(long long n) {
    return n * (3 * n - 1) / 2;
}

long long binary_search(long long (*func)(long long), long long n, long long x) {
    long long head = 1, tail = n, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (func(mid) == x) return mid;
        if (func(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

//int main() {
//    long long n  = 2, D = INT32_MAX, pk, pj;
//    while (Pentagonal(n) - Pentagonal(n - 1) < D) {
//        pk = Pentagonal(n);
//        for (long long j = n - 1; j >= 1; j--) {
//            pj = Pentagonal(j);
//            if (pk - pj >= D) break;
//            int flag = 1;
//            flag = binary_search(Pentagonal, 2 * n, pk + pj);
//            flag = flag && binary_search(Pentagonal, n, pk - pj);
//            if (flag) {
//                D = pk - pj;
//            }
//        }
//        n += 1;
//    }
//    printf("%d", D);
//    return 0;
//}

int main() {
    long long D = INT64_MAX;
    int n = 2;
    while (Pentagonal(n)) {
        for (long long i = n + 1; Pentagonal(n) + Pentagonal(i) <= Pentagonal(i + 1); i++) {
            long long flag1 = 0, flag2 = 0;
            flag1 = binary_search(Pentagonal, 2 * i, Pentagonal(n) + Pentagonal(i));
            flag2 = flag1 && binary_search(Pentagonal, 2 * flag1, Pentagonal(n) + Pentagonal(flag2));
            if (flag1 && flag2) {
                D = Pentagonal(n);
                printf("%d", D);
                return 0;
            }
        n++;
        }
    }
    return 0;
}
