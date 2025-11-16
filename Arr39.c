#include <stdio.h>
int main() {
    int a[3][3]={{1,2,3},{2,5,6},{3,6,9}}, flag=1;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(a[i][j] != a[j][i]) flag = 0;

    if(flag) printf("Symmetric");
    else printf("Not symmetric");
}
