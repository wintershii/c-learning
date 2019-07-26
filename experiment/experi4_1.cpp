#include <iostream>

using namespace std;

const static double PI = 3.1416;

class planet {
protected:
    double distance;
    int revolve;
public:
    planet(double d, int r) {
        distance = d;
        revolve = r;
    }
};

class earth :public planet {
    double circumference;
public:
    earth(double d, int r):planet(d,r) {
        circumference = 2 * r * PI;
    }
    void show();
};

void earth::show() {
    cout << "distance:" << distance << endl;
    cout << "revolve:" << revolve << endl;
    cout << "circumference:" << circumference << endl;
}

int main() {
    earth ob(93000000,365);
    ob.show();
    return 0;
}