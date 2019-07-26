#include <iostream>
using namespace std;
void sqr_it(int *i);

int main( ) {
    int x;
    x=10;
    sqr_it(&x); // 这里应该取地址
    cout<<"The square of x is "<<x<<'\n';
    return 0;
}

void sqr_it(int *i) {
    *i=(*i)*(*i);
}