#include <stdio.h>
int main() {
    char str1[100], str2[100];
    gets(str1); gets(str2);
    int i=0, j=0;
    while(str1[i]) i++;
    while(str2[j]) str1[i++] = str2[j++];
    str1[i] = '\0';
    printf("%s\n", str1);
    return 0;
}
