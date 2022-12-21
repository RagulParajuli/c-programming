//swap using pointer
#include<stdio.h>
void main()
{
	int a=2,b=3,c;
	c=*a;
	*a=*b;
	*b=c;
	printf("The values are %d and %d",*a,*b);
	
}
