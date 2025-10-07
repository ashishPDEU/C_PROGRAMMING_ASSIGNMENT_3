#include <stdio.h>
int main() {
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int amt;
    printf("Enter amount: ");
    scanf("%d", &amt);
    for (int i=0; i<9; i++) {
        if (amt >= notes[i]) {
            int cnt = amt / notes[i];
            printf("%d x %d\n", cnt, notes[i]);
            amt %= notes[i];
        }
    }
    return 0;
}
