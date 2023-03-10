#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of columns:");
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter value for [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    return 0;
}

