#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct PNode {
    char arr1[4];
    int a;
    char arr2[4];
};
int main(void) {
    struct PNode p;
    strcpy(p.arr1, "I love");
    p.a = 0x20206576;
    char arr[] = {0x20,0x20,0x65,0x76};
    printf("%s\n",arr);
    strcpy(p.arr2, "3G!");
    printf("%s", p.arr1);
    return 0;
}