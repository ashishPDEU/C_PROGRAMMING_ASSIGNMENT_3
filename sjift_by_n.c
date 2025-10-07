#include <stdio.h>
int main() {
    int a[10], n, dir;
    for (int i=0; i<10; i++)
        scanf("%d", &a[i]);
    printf("Enter positions: ");
    scanf("%d", &n);
    printf("Direction (1=right, 0=left): ");
    scanf("%d", &dir);
    int b[10] = {0};
    if (dir) // right
        for (int i=9; i>=n; i--)
            b[i] = a[i-n];
    else
        for (int i=0; i<10-n; i++)
            b[i] = a[i+n];
    // Result in b
    return 0;
}
