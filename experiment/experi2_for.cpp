#include <iostream>
#include <string>

using namespace std;

int main() {
    string *name = new string("师东璇");
    cout << *name;
    delete(name);
    return 0;
}