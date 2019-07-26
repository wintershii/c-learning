#include <iostream>

using namespace std;

int max(int x, int y);

int main() {
    int a ,b ,c;
    cin >> a >> b;
    c = max(a,b);
    cout << "max = "<< c <<'\n';
}

int max(int x, int y) {
    return x > y ? x : y;
}
