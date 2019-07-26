#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    while(num != 1) {
        if((num%2) && (num%3) &&(num%5)) {
            printf("false\n");
            return 0;
        }

        if(!(num%2)) {
            num/=2;
        }
        if(!(num%3)) {
            num/=3;
        }
        if(!(num%5)) {
            num/=5;
        }

    }
    printf("true\n");
    return 0;
}