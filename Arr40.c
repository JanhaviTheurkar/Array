#include <stdio.h>
int main() {
    int a[3][3]={{0,0,3},{0,5,0},{7,0,0}};
    printf("Sparse format (row col value):\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(a[i][j] != 0)
                printf("%d %d %d\n", i, j, a[i][j]);
}
