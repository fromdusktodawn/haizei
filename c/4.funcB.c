/*************************************************************************
	> File Name: funcB.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月08日 星期日 18时25分33秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>


int funcB(int n) {
    printf("funcB : %d\n", n);
    if (n == 0) return 1;
    return n * funcB(n - 1);
}
