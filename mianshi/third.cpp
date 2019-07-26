#include <stdio.h>

void f(int n) {
    if(n == 1) {
        printf("1");
        return;
    }
    f(n-1);
    printf("%d",n);
    f(n-1);
}

int main() {
    int n;
    scanf("%d",&n);
    f(n);
    return 0;
}