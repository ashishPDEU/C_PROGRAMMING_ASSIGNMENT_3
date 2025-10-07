#include <stdio.h>
int main() {
    int arr[20], n, val, found=0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Value to search: "); scanf("%d", &val);
    for(int i=0; i<n; i++)
        if(arr[i]==val) { 
            printf("Found at position %d\n", i); found=1; break; 
        }
    if(!found) printf("Not Found\n");
    return 0;
}
