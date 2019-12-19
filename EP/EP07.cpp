/*************************************************************************
	> File Name: EP07.cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月17日 星期二 20时46分28秒
 ************************************************************************/

#include <stdio.h>
#define max_n 200000
/*史诗级线性筛*/
int prime[max_n + 5] = {0};
void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max_n) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    init();
    return 0;
}
