/*************************************************************************
	> File Name: EP26.cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月28日 星期六 20时35分11秒
 ************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;
#define MAX_N 1000

int r_len[MAX_N + 5] = {0};

int get_len(int d) {
    int r = 1, t = 1;
    r_len[r] = 1;
    while (r) {
        r *= 10;
        r %= d;
        t += 1; 
        cout << "r = " << r << endl;
        if (r_len[r]) return t - r_len[r];
        r_len[r] = t;
    }
}

int main() {
    int d = 0, len = -1;
    for (int i = 2; i < MAX_N; i++) {
        memset(r_len, 0, sizeof(r_len));
        int temp = get_len(i);
        cout << endl;
        if (len < temp) {
            len = temp;
            d = i;
        }
    }
    cout << d << " " << len << endl;
    return 0;
}
