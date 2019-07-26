//
// Created by shidongxuan on 19-6-23.
//
#include <iostream>
#include <string>

using namespace std;

class book{
public:
    double price;
    string name;
public:
    book();
    book(string name,double price);
};

book::book() {}

book::book(string name,double price) {
    this->name  = name;
    this->price = price;
}

int main() {
    int n;
    cin >> n;
    book books[n];
    int low = 0;
    int high = 0;
    for (int i = 0; i < n; ++i) {
        string name;
        double price;
        cin >> name;
        cin >> price;
        book tmp(name,price);
        books[i] = tmp;
        if(books[i].price > books[high].price) {
            high = i;
        }
        if(books[i].price < books[low].price) {
            low = i;
        }
    }
    cout << "highest price: " << books[high].price << ", " << books[high].name << endl;
    cout << "lowest price: " << books[low].price << ", " << books[low].name << endl;
    return 0;
}