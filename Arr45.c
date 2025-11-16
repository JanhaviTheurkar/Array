#include <stdio.h>
int main() {
    char a[]="ABC", b[]="ABD";
    int i=0, flag=0;
    while(a[i] != '\0' || b[i] != '\0'){
        if(a[i] != b[i]) { flag=1; break; }
        i++;
    }
    if(flag==0) printf("Equal");
    else printf("Not Equal");
}
