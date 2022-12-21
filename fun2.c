#include<stdio.h>
void main()
{
	hello();    /* here main function calls hello function and indirectly calls goodbye function
	which lies in hello function and again call goodbye function seperately */
	printf("\n");
	goodbye();
}
void hello()
{
	printf("Hello\n");
	goodbye();
}
void goodbye()
{
	printf("Goodbye");
}
