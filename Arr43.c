#include <stdio.h>
int main() {
    char s1[]="World", s2[20];
    int i=0;
    while(s1[i] != '\0'){
        s2[i] = s1[i];
        i++;
    }
    s2[i]='\0';
    printf("%s", s2);
}
