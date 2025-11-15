#include <stdio.h>
int main() {
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}}, temp;
    int r1=0, r2=2;

    for(int j=0;j<3;j++) {
        temp = a[r1][j];
        a[r1][j] = a[r2][j];
        a[r2][j] = temp;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) printf("%d ",a[i][j]);
        printf("\n");
    }
}
