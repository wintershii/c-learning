#include <stdio.h>

int num;

int check(int code) {
    if(!(code%2) || !(code%3) || !(code%5)) {
        return true;
    }
    if(!(num % code)) {
        return false;
    }
    return true;
}

int main() {
    scanf("%d",&num);
    for (int i = 2; i <num ; ++i) {
        if( !check(i)) {
            printf("false\n");
            return 0;
        }
    }
    printf("true\n");
    return 0;
}