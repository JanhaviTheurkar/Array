#include <stdio.h>
int main() {
    int a[]={1,2,2,3,4,4,5}, n=7;
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<i;j++) if(a[i]==a[j]) flag=1;
        if(!flag) printf("%d ",a[i]);
    }
}
