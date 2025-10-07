#include <stdio.h>
int main() {
    int arr[20], n, val;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Value: "); scanf("%d", &val);
    arr[n]=val; n++;
    printf("Array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}
