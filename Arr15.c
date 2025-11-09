#include <stdio.h>
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {6, 7, 8};
    int c[8], i, j, n1 = 5, n2 = 3;
    
    for(i = 0; i < n1; i++) c[i] = a[i];
    for(j = 0; j < n2; j++) c[i + j] = b[j];
    
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) printf("%d ", c[i]);
}
