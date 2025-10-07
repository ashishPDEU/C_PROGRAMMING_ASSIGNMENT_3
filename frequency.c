#include <stdio.h>
int main() {
    int arr[10], freq[100]={0};
    for (int i=0; i<10; i++)
        scanf("%d", &arr[i]);
    for (int i=0; i<10; i++)
        freq[arr[i]]++;
    for (int i=0; i<100; i++)
        if (freq[i]>0)
            printf("%d occurs %d times\n", i, freq[i]);
    return 0;
}
