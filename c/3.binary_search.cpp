/*************************************************************************
	> File Name: binary_search..cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月10日 星期二 18时18分21秒
 ************************************************************************/

#include <iostream>
using namespace std;

int binary_search(int *arr, int x, int n) {
    int head = 0, tail = n - 1, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1 ;
        if (arr[mid] > x) tail = mid -1;
        else if (arr[mid] < x) head = mid + 1;
        else return mid;
    }
    return -1;
}

int binary_search2(int *arr, int head, int tail, int x) {
    if (head > tail) return -1;
    int mid = (head + tail) >> 1;
    if (arr[mid] == x) return mid;
    else if (arr[mid] < x) head = mid + 1;
    else tail = mid - 1;
    return binary_search2(arr, head, tail, x);
}

int binary_search3(int *arr, int n) {
    int head = -1, tail = n - 1, mid;
    while (head < tail) {
        mid = (((head + tail) >> 1) + 1);
        if (arr[mid] >= 1) head = mid;
        else tail = mid - 1;
    }
    return head;
}

int main() {
    //int arr[6] = {1, 2, 3, 4, 5, 6};
    //int x = 5, n = 6;
    //cout << binary_search(arr, x, n) << endl;
    //cout << binary_search2(arr, 0, n - 1, x) << endl;
    int arr3[] = {1, 1, 1, 1, 0, 0};
    cout << binary_search3(arr3, 6) << endl;
    return 0;
}
