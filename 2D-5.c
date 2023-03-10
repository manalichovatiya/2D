#include <stdio.h>
int main(){
    int m,n,i,j,sum=0;
    printf("Enter row:");
    scanf("%d",&m);
    printf("Enter column:");
    scanf("%d",&n);
    
    int a[m][n];
  for (i=0; i<m; i++){
    for (j=0; j<n; j++){
      printf("Enter element a[%d][%d]: ", i,j);
      scanf("%d", &a[i][j]);
    }
  }
 	for (i=0; i<m; i++){
    for (j=0; j<n; j++){
    		printf("%d ",a[i][j]);
    }
    printf("\n");
 }
    for(i=0;i<m;i++){
        sum=0;
        for(j=0;j<n;j++){
            sum+=a[i][j];
        }
        printf("Sum [%d] :%d\n",i,sum);
    }
    
    return 0;
}
