#include <stdio.h>    
int main(){ 
	int a[4][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int r,c;
	r= sizeof(a)/sizeof(a[0]);
	c= sizeof(a[0])/sizeof(a[0][0]);
	printf("lenth of row :%d\n",r);
	printf("lenth of col :%d",c);
	
	return 0;
}
