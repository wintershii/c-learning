//
// Created by shidongxuan on 19-3-25.
//
#include <iostream>

using namespace std;

class Score {
    float computer;
    float english;
    float math;
public:
    Score(float x1, float y1, float z1);
    Score();
    void print();
    void modify(float x2, float y2, float z2);
};

Score::Score(float x1, float y1, float z1) {
    this->computer = x1;
    this->english = y1;
    this->math = z1;
}

void Score::print() {
    cout << "computer:" << this->computer << endl;
    cout << "english:" << this->english << endl;
    cout << "math:" << this->math << endl;
}

int main() {
    Score *score = new Score(92.5,88.0,71.6);
    score->print();
    return 0;
}
