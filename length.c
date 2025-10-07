#include <stdio.h>
int main() {
    char str[100];
    int len = 0;
    gets(str);
    while(str[len] != '\0') len++;
    printf("Length: %d\n", len);
    return 0;
}
