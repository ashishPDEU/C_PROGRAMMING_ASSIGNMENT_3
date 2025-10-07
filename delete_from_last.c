#include <stdio.h>
int main() {
    int arr[20], n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    for(int i=0; i<n-1; i++) arr[i]=arr[i+1];
    n--;
    printf("Array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}
