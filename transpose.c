#include <stdio.h>
int main() {
    int a[4][4], t[4][4];
    for (int i=0; i<4; i++)
        for (int j=0; j<4; j++)
            scanf("%d", &a[i][j]);
    for (int i=0; i<4; i++)
        for (int j=0; j<4; j++)
            t[j][i] = a[i][j];
    // Transpose in t
    return 0;
}
