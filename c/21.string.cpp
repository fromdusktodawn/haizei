/*************************************************************************
	> File Name: 21.cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月12日 星期四 20时30分18秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int n;
    char str[100];
    while (cin >> n) {
        sprintf(str, "%x", n);
        printf("%s has %lu digit", str, strlen(str));
    }
    return 0;
}
