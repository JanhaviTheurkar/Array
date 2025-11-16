#include <stdio.h>
int main() {
    char s[] = "Hello";
    int len = 0;
    while(s[len] != '\0') len++;
    printf("Length = %d", len);
}
