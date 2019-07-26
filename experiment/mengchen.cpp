#include <iostream>

using namespace std;

class Complex
{
public:
    Complex(double r=0, double i=0):real(r), imag(i){	}
    Complex operator+(Complex& c) const;//重载双目运算符'+'
    Complex operator-=(Complex& c); //重载双目运算符'-='
    friend Complex operator-(Complex& c1, Complex& c2);//重载双目运算符'-'
    void Display() const;
private:
    double real;
    double imag;
};

Complex Complex::operator+(Complex &c) const {
    double a = this->real + c.real;
    double b = this->imag + c.imag;
    Complex res(a,b);
    return res;
}

Complex Complex::operator-=(Complex &c) {
    double a = this->real - c.real;
    double b = this->imag - c.imag;
    this->real = a;
    this->imag = b;
    Complex res(a,b);
    return res;
}

Complex operator-(Complex &c1, Complex &c2){
    double a = c1.real - c2.real;
    double b = c1.imag - c2.imag;
    Complex res(a,b);
    return res;
}


void Complex::Display() const
{
    cout << "(" << real << ", " << imag << ")" << endl;
}

int main()
{
    double r, m;
    cin >> r >> m;
    Complex c1(r, m);
    cin >> r >> m;
    Complex c2(r, m);
    Complex c3 = c1+c2;
    c3.Display();
    c3 = c1-c2;
    c3.Display();
    c3 -= c1;
    c3.Display();
    return 0;
}