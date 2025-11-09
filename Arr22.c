#include <stdio.h>
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int temp = a[0];
    for(int i = 0; i < 4; i++) a[i] = a[i + 1];
    a[4] = temp;
    printf("After left rotation: ");
    for(int i = 0; i < 5; i++) printf("%d ", a[i]);
}
