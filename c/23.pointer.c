/*************************************************************************
	> File Name: 23.pointer.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月14日 星期六 20时30分58秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#define offset(T, a) ({\
    T tmp;\
    (char *)&tmp.a - (char *)&tmp;\
})

//#define offset(T, a) (long long)(&(((T *)(NULL))->a))

struct Data {
    double a;
    int b;
    char c;
};

int main() {
    int num1 = 0x616263;
    int num2 = 0x61626364;
    printf("%s\n", (char *)(&num1));
    printf("%s\n", (char *)(&num2));
    printf("%s\n", (char *)(&num2 + 1));
    printf("%ld\n", offset(struct Data, a));
    printf("%ld\n", offset(struct Data, b));
    printf("%ld\n", offset(struct Data, c));
    return 0;
}
