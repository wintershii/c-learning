#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Attom {
    char word;
    int time;
};

int compare(const void *a, const void *b) {
    int res = ((Attom *)a)->time - ((Attom *)b)->time;
    if(res == 0) {
        return ((Attom *)a)->word - ((Attom *)b)->word;
    }
    return res;
}

int main() {
    char str[100];
    Attom attom[128];
    for (int i = 0; i < 128; ++i) {
        attom[i].word = i;
        attom[i].time = 0;
    }
    gets(str);
    for (int i = 0; i < strlen(str); ++i) {
        attom[str[i]].time++;
    }
    qsort(attom,128, sizeof(Attom),compare);
    for (int i = 0; i <128 ; ++i) {
        if(attom[i].time != 0) {
            printf("%c",attom[i].word);
        }
    }
    printf("\n");
    return 0;
}