#include <stdio.h>
int main() {
    int a[10], n, newN;
    printf("Enter array size (max 9): ");
    scanf("%d", &n);
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter new number: ");
    scanf("%d", &newN);
    for (int i=n; i>0; i--)
        a[i] = a[i-1];
    a[0] = newN;
    n++;
    // a has new array
    return 0;
}

