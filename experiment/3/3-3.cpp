//
// Created by shidongxuan on 19-6-26.
//

#include <iostream>
using namespace std;
int& f(int &i )
{
    i += 10;
    return i ;
}
int main()
{
    int *num1, *num2;
    num1 = new int[10];
    num2 = new int[20];
    num1[0] = 100;
    num2[0] = 300;
    //num1 = num2;
    delete [] num1;
    cout << num1[0]<<endl;
    cout << num2[0]<<endl;
}