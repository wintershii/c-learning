//
// Created by shidongxuan on 19-3-25.
//
#include <iostream>
using namespace std;

class Date {
    int d,m,y;
public:
    int day() const { return d;}
    int month() const { return m;}
    int year() const;
};

inline int Date::year() const { return y;}

int main() {
    Date *date = new Date();
    cout << date->year();
    return 0;
}
