#include <stdio.h>
int main() {
    char s1[50]="Hello ", s2[]="World";
    int i=0,j=0;
    while(s1[i] != '\0') i++;
    while(s2[j] != '\0') s1[i++] = s2[j++];
    s1[i]='\0';
    printf("%s", s1);
}
