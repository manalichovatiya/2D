#include <stdio.h>
int main(){
  int m, n,sum[100][100], i, j;
  printf("Enter the number of rows: ");
  scanf("%d", &m);
  printf("Enter the number of columns: ");
  scanf("%d", &n);
    int  a[m][n],b[m][n];
    
  printf("\nEnter elements of 1st Array:\n");  
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
  
  printf("Enter elements of 2nd Array:\n");
  for (i=0; i<m; i++){
    for (j=0; j<n; j++){
      printf("Enter element b[%d][%d]: ", i,j);
      scanf("%d", &b[i][j]);
    }
 }
  	for (i=0; i<m; i++){
    for (j=0; j<n; j++){
    	printf("%d ",b[i][j]);
    }
    printf("\n");
 }
 
 
  for (i = 0; i<m; i++){
    for (j = 0; j<n; j++){
      sum[i][j] = a[i][j] + b[i][j]; 
	}
 }
  printf("\nSum of both Array: \n");
  for (i = 0; i<m; i++){
    for (j = 0; j<n; j++){
      printf("%d ", sum[i][j]);
      if (j == n- 1) {
        printf("\n");
      }
    }
 }
  return 0;
}
