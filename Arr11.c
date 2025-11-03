#include <stdio.h>
int main() {
    int a[]={5,10,15,20}, sum=0;
    for(int i=0;i<4;i++) sum+=a[i];
    printf("Sum=%d",sum);
}
