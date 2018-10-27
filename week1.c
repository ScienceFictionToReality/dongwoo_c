//
// Created by minch on 2018-10-27.
//

#include <stdio.h>

int my_strcmp(const char *str1, const char *str2) {
    int i = 0;
    int j = 0;
    int size = 1;

    for (char *sstr1 = str1; *sstr1; sstr1++) {
        size++;
    }

    for (i = 0; i < size; i++) {
        if (*(str1 + i) == *(str2 + i)) {
            j = 1;
        } else(j = 2);
    }

    if (j == 1) { return 1; }
    else { return 0; }
}

int my_strcmp2(const char *str1, const char *str2) {
    int[5][5] arr = {{0},};

    int i = 0;
    while (str1[i] && str2[i]) {//str1[i] null 이 아니고 str2[i] 가 널이 아닐때
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    };
    if (*(str1 + i) != *(str2 + i)) {
        return 0;
    }
    return 1;
}

int main() {

    printf("%d\n", my_strcmp2("abcde", "abcde"));
    printf("%d\n", my_strcmp2("abcde", "abcdef"));
    return 0;
}
