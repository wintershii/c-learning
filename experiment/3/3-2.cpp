//
// Created by shidongxuan on 19-6-26.
//

#include <iostream>
using namespace std;

int* bubble_sort(int n);/* 对长度为n的数组执行冒泡排序 */

int main()
{
    int n;
    cin >> n;
    int* a = bubble_sort(n);


    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i < n - 1)cout << " ";
    }
    cout << endl;
    return 0;
}

int* bubble_sort(int n) {
    int *arr = new int[1001];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < n; ++j) {
        for (int k = 0; k < n-1-j; ++k) {
            if(arr[k] > arr[k+1]) {
                int tmp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = tmp;
            }
        }
    }

    return arr;
}