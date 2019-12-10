/*************************************************************************
	> File Name: funcC.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月08日 星期日 18时16分47秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#include "funcB.h"

int funcC(int n) {
    printf("funcC : %d\n", n);
    if (n == 0) return 1;
    funcB(n - 1);
    return n;
}
