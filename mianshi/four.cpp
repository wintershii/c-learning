#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    gets(str);
    for (int i = 0; i < strlen(str); ++i) {
        if(strncmp(str+i,"me",2) == 0) {
            for (int j = i; j < strlen(str); ++j) {
                str[j] = str[j+2];
            }
            i -= 2;
        }
    }
    puts(str);
    return 0;
}