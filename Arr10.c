#include <stdio.h>
int main() {
    int n, a[100];
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
