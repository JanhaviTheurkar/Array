#include <stdio.h>
int main() {
    int a[]={2,4,6,8,10}, sum=0;
    for(int i=0;i<5;i++) sum+=a[i];
    printf("Average=%.2f", sum/5.0);
}
