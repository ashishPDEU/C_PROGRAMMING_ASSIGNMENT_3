#include <stdio.h>
int main() {
    char str1[100], str2[100];
    gets(str1); gets(str2);
    int res = 0, i = 0;
    while(str1[i] && str2[i]) {
        if(str1[i] != str2[i]) {
            res = str1[i]-str2[i]; break;
        }
        i++;
    }
    if(res == 0) res = str1[i]-str2[i];
    if(res == 0)
        printf("Same\n");
    else if(res > 0)
        printf("Greater\n");
    else
        printf("Smaller\n");
    return 0;
}
