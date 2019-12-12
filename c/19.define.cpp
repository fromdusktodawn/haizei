/*************************************************************************
	> File Name: 19.define.cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月12日 星期四 19时10分33秒
 ************************************************************************/
#include <cstdio>
#include <iostream>
using namespace std;

#define MAX(A, B) ({
    __typeof(A) __a= (A); __typeof(B) __b = (B); \
    __a > __b ? __a : __b; \
})

#define P(func) {\
    printf("%s = %d\n", #func, func);\
}

int main() {
    int a = 8
    P(MAX(2, 3));
    P(5 + MAX(2, 3));
    P(MAX(2, MAX(3, 4)));
    P(MAX(2, 3 > 4 ? 3 : 4));
    P(MAX(a++, 6));
    P(a);
    return 0;
}

