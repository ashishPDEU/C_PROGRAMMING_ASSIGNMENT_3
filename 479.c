#include <stdio.h>
int main() {
    int arr[10];
    for (int i=0; i<10; i++)
        scanf("%d", &arr[i]);
    printf("%d %d %d\n", arr[3], arr[6], arr[8]);
    return 0;
}
