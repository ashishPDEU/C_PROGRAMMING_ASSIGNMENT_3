#include <stdio.h>
int main() {
    int arr[20], n, val, i, found=0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Value to delete: "); scanf("%d", &val);
    for(i=0; i<n; i++) {
        if(arr[i]==val) { found=1; break; }
    }
    if(found) {
        for(int j=i; j<n-1; j++) arr[j]=arr[j+1];
        n--;
    }
    printf("Array: ");
    for(i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}
