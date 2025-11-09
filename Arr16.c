#include <stdio.h>
int main() {
    int a[10]={1,2,3,4,5}, n=5,pos=3,val=99;
    for(int i=n;i>=pos;i--) a[i]=a[i-1];
    a[pos-1]=val; n++;
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
