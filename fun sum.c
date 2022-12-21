#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter two no.");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("The sum is %d",c);
}
int sum(int x,int y){
	return x+y;
}
