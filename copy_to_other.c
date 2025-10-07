#include <stdio.h>
int main() {
    char str1[100], str2[100];
    gets(str1);
    int i;
    for(i = 0; str1[i]; i++)
        str2[i] = str1[i];
    str2[i] = '\0';
    printf("%s\n", str2);
    return 0;
}

