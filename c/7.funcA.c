/*************************************************************************
	> File Name: funcA.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月08日 星期日 18时13分46秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#include "funcB.h"


int funcA(int n) {
    printf("funcA : %d\n", n);
    if (n == 0) return 1;
    funcB(n - 1);
    return n;
}
