#include<stdio.h>

void main()
{
	int sum,*a,*b;
	sum=Sum(&a,&b);
	printf("The sum, is %d",sum);
}
   Sum(int *x, int *y){
	printf("Enter your integers:");
	scanf("%d%d",&*x,&*y);
	int sum=*x+*y;
//		printf("The sum is %d\n",sum);
}
