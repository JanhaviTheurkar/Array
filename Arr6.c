#include <stdio.h>

int main() {
    int a[5] = {5, 10, 15, 20, 25}, b[5];
    for(int i = 0; i < 5; i++) {
        b[i] = a[i];
    }
    printf("Copied array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}
