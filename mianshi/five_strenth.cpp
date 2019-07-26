#include <stdio.h>
#include <string.h>

int book[100];

int contains(char str[],int start, int end,char son[]) {
    int ans = 0;
    for (int i = 0; i < strlen(son); ++i) {
        for (int j = start; j < end; ++j) {
            if(str[j] == son[i]) {
                ans++;
            }
        }
    }
    if(ans == strlen(son)) {
        return true;
    }
    return false;
}

int Min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    char str1[100];
    char str2[100];

    memset(book,0, sizeof(book));
    int min = 99999;
    gets(str1);
    gets(str2);
    for (int i = 0, j = 0; i < strlen(str1); ) {
        if(!contains(str1,i,j,str2)) {
            j++;
        } else {
            min = Min(min,j-i+1);
            i++;
        }
    }
    printf("%d\n",min);

    return 0;
}
