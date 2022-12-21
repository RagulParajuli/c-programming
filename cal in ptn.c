#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	sum(a,b);
	
	product(a,b);
	
}
void sum(int a, int b){
	int sum=a+b;
	printf("The sum is %d", sum);
	
}
void produt(int x, int y){
	int pro=(x)*(y);
	printf("The product is %d", pro);
}
