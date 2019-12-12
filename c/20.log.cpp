/*************************************************************************
	> File Name: 20.log.cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月12日 星期四 19时19分48秒
 ************************************************************************/

#include <iostream>
using namespace std;

#define log(frm, arg...) {\
    printf("[%s : %s : %d]",  __FILE__, __func__, __LINE__);\
    printf(frm, ##arg);\
    printf("\n");\
}

int main() {
    int a = 123;
    log("%d", a);
    //printf("[%s : %s : %d] %d\n", __FILE__, __func__, __LINE__, a);
}
