#include <iostream>

using namespace std;

int model = 90;//去掉const
int v[] = {1,2,3,4};//去掉const
const int x = 0;

void f() {
    model = 200;
    v[2]++;
}

int main() {
    f();
    cout << model << " " << v[2];
}


