//pointer to pointer
#include<stdio.h>
void main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	int *ptr=&x;
	int **pptr=&ptr;
	printf("%d\n",x);
	printf("%u\n",&x);
	printf("%d\n",*ptr);
	printf("%u\n",&ptr);
	printf("%d\n",**pptr);
}
