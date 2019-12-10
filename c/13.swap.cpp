/*************************************************************************
	> File Name: swap.cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月07日 星期六 16时45分42秒
 ************************************************************************/

#include <iostream>
using namespace std;

void my_swap(int &a, int &b) {
    a ^= b;
    b ^= a;
    a ^= b;
    return ;
}

int main() {
    int a, b;
    cin >> a >> b;
    my_swap(a, b);
    cout << a << " " << b;
    return 0;
}
