#include<stdio.h>
void main()
{
	int f,c;
	printf("Enter calcius:");
	scanf("%d",&c);
	f=temp(c);
	printf("The value is %d",f);
}
int temp(int x){
	int y=x*(9/5)+32;
	return y;
}
