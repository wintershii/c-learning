#include <iostream>

using namespace std;

class complex {
public:
    complex(double r = 0.0, double i = 0.0) {
        real = r;
        imag = i;
    }
//    complex operator + (complex c2);
//    complex operator - (complex c2);
    /*
     * 友元函数
     */
    friend complex operator + (complex c1, complex c2);
    friend complex operator - (complex c1, complex c2);
    void display();
private:
    double real;
    double imag;
};

void complex::display() {
    if(imag > 0) {
        cout << real << '+';
        cout << imag << 'i';
    } else if (imag == 0) {
        cout << real;
    } else {
        cout << real << '-';
        cout << -imag << 'i';
    }
    cout << endl;
}

complex operator-(complex c1, complex c2) {
    return complex(c1.real - c2.real,c1.imag-c2.imag);
}

complex operator+(complex c1, complex c2) {
    return complex(c1.real + c2.real,c1.imag + c2.imag);
}

//complex complex::operator+(complex c2) {
//    return complex(real+c2.real,imag+c2.imag);
//}
//
//complex complex::operator-(complex c2) {
//    return complex(real-c2.real,imag-c2.imag);
//}

int main() {
    complex c(3,4);
    c.display();
    complex c2(2,6);
//    c.operator+(c2).display();
//    c.operator-(c2).display();

    complex c3 = c + c2;
    complex c4 = c - c2;
    c3.display();
    c4.display();
    return 0;
}