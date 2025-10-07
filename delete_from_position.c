#include <stdio.h>
int main() {
    int arr[20], n, pos;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Position to delete (0 to %d): ", n-1); scanf("%d", &pos);
    for(int i=pos; i<n-1; i++) arr[i]=arr[i+1];
    n--;
    printf("Array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}
