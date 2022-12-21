//write a program to check wheather a number is divisible by 97 or not
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a%97==0)
	{
		printf("Yes, it is divisible");
	}
	else{
	printf("No, it is not divisible");}
}
