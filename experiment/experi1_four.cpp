#include <iostream>

using namespace std;

int main() {
    int arr[] = {6,7,8,9,10};
    int *p = arr;
    *(p++) += 123;
    printf("%d %d\n",*p,*(++p));
    printf("%d %d %d %d %d\n",*p--,*p+20,*(p--),*p,*(++p));
}