#include <iostream>
#include <string.h>

using namespace std;

class Person {
public:
    Person(const char* s) {
        cout << "父类构造方法" << endl;
        name = new char[strlen(s)+1];
        strcpy(name, s);
    }
    ~Person() {
        cout << "父类析构方法" << endl;
        delete [] name;
    }
protected:
    char* name;
};

class Student : public Person {
public:
    int *age;
public:
    Student(int a, const char *s):Person(s) {
        cout << "子类构造方法" << endl;
        age = new int(1);
        *age = a;
    }
    ~Student() {
        cout << "子类析构方法" << endl;
        delete age;
    }
};

int main() {
    Student s(19,"winter");
    delete &s;
    return 0;
}