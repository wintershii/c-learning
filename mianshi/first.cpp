#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int word[128];
    memset(word,0, sizeof(word));
    gets(str);
    for (int i = 0; i < strlen(str); ++i) {
        word[str[i]]++;
    }
    for (int i = 1; i <= strlen(str); ++i) {
        for (int j = 0; j < 128; ++j) {
            if(word[j] == i) {
                printf("%c",j);
            }
        }
    }
    printf("\n");
    return 0;
}