#include <stdio.h>
int main() {
    char str[100];
    gets(str);
    for(int i = 0; str[i]; i++)
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    printf("%s\n", str);
    return 0;
}
