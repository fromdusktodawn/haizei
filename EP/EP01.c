/*************************************************************************
	> File Name: EP01.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月15日 星期日 14时53分33秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

//int is_val(int n) {
//    if (n % 3 == 0 || n % 5 == 0) return 1;
//    return 0;
//}

int main() {
    int sum = 0;
    //for (int i = 1; i < 1000; i++) {
    //    if (!is_val(i)) continue;
    //    sum += i;
    //}
    int sum3 = (3 + 999)  * 333 / 2;
    int sum5 = (5 + 995) * (995 / 5) / 2;
    int sum15 = (15 + (999 / 15) * 15) * (999 / 15) / 2;
    sum = sum3 + sum5 - sum15;
    printf("%d\n", sum);
}
