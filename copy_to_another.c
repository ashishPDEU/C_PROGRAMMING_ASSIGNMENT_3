#include <stdio.h>
int main() {
    int a[5], b[10]={0};
    for (int i=0; i<5; i++)
        scanf("%d", &a[i]);
    for (int i=0; i<5; i++)
        b[2*i] = a[i];
    // b has a[i] at 0,2,4,6,8
    return 0;
}
