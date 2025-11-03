#include <stdio.h>
int main() {
    int a[]={5,8,2,9,3}, max=a[0];
    for(int i=1;i<5;i++)
        if(a[i]>max) max=a[i];
    printf("Max=%d",max);
}
