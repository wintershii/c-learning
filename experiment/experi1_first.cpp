#include <iostream>
#include <string>
using namespace std;

int main() {
    string userName;
    cout << "please enter your first name: ";
    cin >> userName;
    cout << '\n'
    << "Hello, "
    << userName
    << "... and goodbye!\n";
    return 0;
}