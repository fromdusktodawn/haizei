/*************************************************************************
	> File Name: 22.test.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月14日 星期六 19时05分27秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

union IP {
    unsigned int num;
    struct {
        unsigned char a1;
        unsigned char a2;
        unsigned char a3;
        unsigned char a4;
    } ip;
};

char is_little() {
    int x = 1;
    return ((char *) &x)[0];
}

int main() {
    char str[25];
    int arr[4];
    union IP p;
    printf("%c", is_little());
    while (~scanf("%s", str)) {
        sscanf(str, "%d,%d.%d.%d", arr, arr + 1, arr + 2, arr + 3);
        p.ip.a1 = arr[3];
        p.ip.a2 = arr[2];
        p.ip.a3 = arr[1];
        p.ip.a4 = arr[0];
        printf("%d\n", p.num);
    }
    return 0;
}
