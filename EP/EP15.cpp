/*************************************************************************
	> File Name: EP15.cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月28日 星期六 15时35分26秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int m = 40, n = 20;
    long long ans = 1;
    while (m != 20|| n) {
        if (m != 20) ans *= (m--);
        if (n != 0 && !(ans % n)) ans /= (n--);
    }
    cout << ans << endl;
    return 0;
}
