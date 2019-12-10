/*************************************************************************
	> File Name: my_printf.cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月08日 星期日 18时44分53秒
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <cinttypes>
#include <stdarg.h>
#define PUTC(a) putchar(a), ++cnt
using namespace std;

int reverse_num(int num, int *temp) {
    int digit = 0;
    do {
        *temp = (*temp) * 10 + (num % 10);
        num /= 10;
        digit++;
    } while (num);
    return digit;
}

int output_num(int temp, int digit) {
    int cnt = 0;
    while (digit--) {
        PUTC(temp % 10 + '0');
        temp /= 10;
        cnt++;
    }
    return cnt;
}

int my_printf(const char *frm, ...) {
    int cnt = 0;
    #define PUTC(a) putchar(a), ++cnt
    va_list arg;
    va_start(arg, frm);

    for (int i = 0; frm[i]; i++) {
        switch (frm[i]) {
            case '%': {
                switch (frm[++i]) {
                    case 'd': {
                        int xx = va_arg(arg, int), temp = 0;
                        uint32_t x;
                        if (xx < 0) PUTC('-'), x = -xx;
                        else x = xx;
                        int num1 = x / 100000, num2 = x % 100000;
                        int temp1 = 0, temp2 = 0;
                        int digit1 = reverse_num(num1, &temp1);
                        int digit2 = reverse_num(num2, &temp2);
                        if (num1) digit2 = 5;
                        else digit1 = 0;
                        cnt += output_num(temp1, digit1);
                        cnt += output_num(temp2, digit2);
                    } break;
                    case '%': {
                        PUTC(frm[i]);
                    } break;
                    case 's': {
                        const char *str = va_arg(arg, const char *);
                        for (int i = 0; str[i]; i++) {
                            putchar(str[i]);
                        }
                    } break;
                }
            } break;
            default: PUTC(frm[i]); break;
        }
    }
    va_end(arg);
    #undef PUTC
    return cnt;
}

int main() {
    int a = 123;
    printf("hello world\n");
    my_printf("hello world\n");
    printf("%d\n", a);
    my_printf("%d\n", a);
    printf("INT32_MAX = %d\n", INT32_MAX);
    my_printf("INT32_MAX = %d\n", INT32_MAX);
    printf("INT32_MIN = %d\n", INT32_MIN);
    my_printf("INT32_MIN = %d\n", INT32_MIN);
    char str[100] = "i love C";
    printf("%s\n", str);
    my_printf("%s\n", str);
    return 0;
}
