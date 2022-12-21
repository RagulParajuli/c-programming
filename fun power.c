//calculate power of a no
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two no.");
	scanf("%d%d",&a,&b);
	power(a,b);
}
void power(int x, int y){
	int c=pow(x,y);
	printf("The ans is %d",c);
}
