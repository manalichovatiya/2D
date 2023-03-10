#include<stdio.h>
int main(){
 int i,j,m,n;
 float a[m][n], sum=0, avg;

 printf("Enter column size:");
 scanf("%d", &m);
  printf("Enter row size:");
 scanf("%d",&n);
 printf("Enter matrix elements:\n");
 for(i=0;i< m;i++){
  for(j=0;j< n;j++){
   printf("a[%d][%d]=",i,j);
   scanf("%f", &a[i][j]);
  }
 }
 for(i=0;i< m;i++){
  for(j=0;j< n;j++){
   sum = sum + a[i][j];
  }
 }
 avg = sum/(m*n);
 
 printf("Sum = %f\n", sum);
 printf("Average = %f", avg);

	return 0;
}
