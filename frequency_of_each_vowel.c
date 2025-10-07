#include <stdio.h>
int main() {
    char str[100];
    int a=0,e=0,i_=0,o=0,u=0;
    gets(str);
    for(int j=0; str[j]; j++) {
        char ch = str[j];
        if(ch=='a'||ch=='A') a++;
        else if(ch=='e'||ch=='E') e++;
        else if(ch=='i'||ch=='I') i_++;
        else if(ch=='o'||ch=='O') o++;
        else if(ch=='u'||ch=='U') u++;
    }
    printf("a:%d e:%d i:%d o:%d u:%d\n", a,e,i_,o,u);
    return 0;
}

