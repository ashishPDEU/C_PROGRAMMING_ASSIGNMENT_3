#include <stdio.h>
void bubbleSort(int arr[], int n, int asc) {
    for (int i=0; i<n-1; i++)
        for (int j=0; j<n-i-1; j++)
            if ((asc && arr[j]>arr[j+1]) || (!asc && arr[j]<arr[j+1])) {
                int t = arr[j];
                arr[j] = arr[j+1]; 
                arr[j+1] = t;
            }
}
int main() {
    int arr[5], asc;
    for (int i=0; i<5; i++)
        scanf("%d", &arr[i]);
    printf("Enter 1 for ascending, 0 for descending: ");
    scanf("%d", &asc);
    bubbleSort(arr, 5, asc);
    for (int i=0; i<5; i++)
        printf("%d ", arr[i]);
    return 0;
}
