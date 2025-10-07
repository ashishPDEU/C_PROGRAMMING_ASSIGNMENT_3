#include <stdio.h>
int main() {
    int arr[20], n, pos, val;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Position (0 to %d): ", n); scanf("%d", &pos);
    printf("Value: "); scanf("%d", &val);
    for(int i=n; i>pos; i--) arr[i]=arr[i-1];
    arr[pos]=val; n++;
    printf("Array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}
