#include <stdio.h>
int main() {
    char s[]="Hello world this is C";
    int count=1;
    for(int i=0;s[i]!='\0';i++)
        if(s[i]==' ') count++;
    printf("Words = %d", count);
}
