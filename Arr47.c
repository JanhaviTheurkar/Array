#include <stdio.h>
int main() {
    char s[]="Hello World";
    int v=0, c=0;
    for(int i=0;s[i]!='\0';i++){
        if(strchr("aeiouAEIOU", s[i])) v++;
        else if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) c++;
    }
    printf("Vowels=%d Consonants=%d", v, c);
}
