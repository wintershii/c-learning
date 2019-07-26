//
// Created by shidongxuan on 19-6-23.
//
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int rep;
    cin >> rep;
    while(rep-- > 0) {
        int h,m,s;
        int n;
        scanf("%d:%d:%d",&h,&m,&s);
        scanf("%d",&n);
        s += n;
        while (s >= 60) {
            s -= 60;
            m++;
            while(m >= 60) {
                m -= 60;
                h++;
                while (h >= 24) {
                    h -= 24;
                }
            }
        }
        printf("time: %d:%d:%d\n",h,m,s);
    }
    return 0;
}