//
// Created by shidongxuan on 19-6-26.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
    double real;
    int p;
    scanf("%lf*10^%d",&real,&p);
    printf("%lf",real);
    double res = real * pow(10,p);
    printf("The actual value for %lf*10^%d is %.0lf",real,p,res);
    return 0;
}