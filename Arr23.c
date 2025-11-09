#include <stdio.h>
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int temp = a[4];
    for(int i = 4; i > 0; i--) a[i] = a[i - 1];
    a[0] = temp;
    printf("After right rotation: ");
    for(int i = 0; i < 5; i++) printf("%d ", a[i]);
}
