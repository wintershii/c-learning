#include <iostream>

using namespace std;

class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle(int length,int width);
    int getArea();
};

Rectangle::Rectangle(int length, int width) {
    this->length = length;
    this->width = width;
}

int Rectangle::getArea() {
    return this->length * this->width;
}

int main() {

    Rectangle *rectangle = new Rectangle(4,5);
    cout << rectangle->getArea();
    return 0;
}