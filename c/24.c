/*************************************************************************
	> File Name: 24.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月19日 星期四 20时35分59秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#include <string.h>
#define max_n 10
int arr[max_n + 5][max_n + 5];
int t, sx, sy, n, m;
int dir[8][2] = {
    -2, 1, -2, -1, 2, -1, 2, 1, -1, -2, -1, 2, 1, -2, 1, 2
};
int ans = 0;

void dfs(int x, int y, int cnt) {
    if (x < 0 || x >= n || y < 0 || y >= m) return ;
    if (arr[x][y]) return ;
    if (cnt >= n * m) {
        ans += 1;
        return ;
    }
    arr[x][y] = 1;
    for (int k = 0; k < 8; k++) {
        int dx = x + dir[k][0];
        int dy = y + dir[k][1];
        dfs(dx, dy, cnt + 1);
    }
    arr[x][y] = 0;
    return ;
}

int main() {
    scanf("%d", &t);
    int cnt = 1;
    while (t--) {
        memset(arr, 0, sizeof(arr));
        scanf("%d%d%d%d", &n, &m, &sx, &sy);
        dfs(sx, sy, cnt);
        printf("%d\n", ans);
        ans = 0;
    }
    return 0;
}
