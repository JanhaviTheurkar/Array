#include <stdio.h>
int main() {
    int a[3][3]={{5,2,8},{9,1,6},{4,7,3}}, max=a[0][0];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(a[i][j] > max) max = a[i][j];
    printf("Max = %d", max);
}
