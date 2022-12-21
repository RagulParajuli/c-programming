//pointer
#include<stdio.h>
void main()
{
	int a=22;
	int *ptr=&a;
	int age=*ptr;
//	printing address
	printf("%p",&age);   //p is used to print  raw address
	printf("\n");
//	unsigned int
	printf("%u\n",ptr);   //u is used to print address in unsigned int form
	printf("%u\n",&a);
	printf("%u\n",&ptr);
	printf("%u",*(&a));
//	printf("%u")
}
