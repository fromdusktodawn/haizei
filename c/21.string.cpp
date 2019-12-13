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
    char str[] = "123 456 789";
    int a;
    sscanf(str, "%d%[^$]s", &a, str);
    cout << str << endl;
    return 0;
}
