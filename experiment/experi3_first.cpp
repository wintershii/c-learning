#include <iostream>

using namespace std;

class counter{
    int value;

public:
    counter(int number);
    void increment();
    void decrement();
    int getvalue();
    void print();
};

counter::counter(int number) {
    this->value = number;
}

void counter::increment() {
    this->value++;
}

void counter::decrement() {
    this->value--;
}

int counter::getvalue() {
    return this->value;
}

void counter::print() {
    cout << this->value;
}

int main() {
    counter *count = new counter(8);
    count->increment();
    count->print();
    return 0;
}
