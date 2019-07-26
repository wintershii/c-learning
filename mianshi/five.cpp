#include <stdio.h>
#include <string.h>

int check(char str1[], int start, int end,char str2[]) {
    for (int i = 0; i < strlen(str2); ++i) {
        int flag = 0;
        for (int j = start; j <= end; ++j) {
            if(str1[j] == str2[i]) {
                flag = 1;
            }
        }
        if(!flag) {
            return false;
        }
    }
    return true;
}


int main() {
    int min = 99999;
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);

    for (int i = 0; i < strlen(str1); ++i) {
        for (int j = i; j < strlen(str1); ++j) {
            if(check(str1,i,j,str2)) {
                if(j-i+1 < min) {
                    min = j-i+1;
                }
            }
        }
    }
    printf("%d\n",min);
    return 0;
}