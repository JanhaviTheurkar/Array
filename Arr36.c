#include <stdio.h>
int main() {
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}}, temp;
    int c1=0, c2=2;

    for(int i=0;i<3;i++){
        temp = a[i][c1];
        a[i][c1] = a[i][c2];
        a[i][c2] = temp;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) printf("%d ",a[i][j]);
        printf("\n");
    }
}
