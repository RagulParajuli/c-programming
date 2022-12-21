#include<stdio.h>
void main()
{
	int n;
	printf("Enter a no.");
	scanf("%d",&n);
	table(n);   // argument/actual parameter
	}
void table(int x){  // parameter/formal parameter
int i;
	for(i=1; i<=10; i++){
		printf("%dx%d=%d\n",x,i,x*i);
	}
}
/* in this program, i 1st got a number from user and stores in n.
after that i declared table function in main function so,
the calculation part which was done in table function got dispalyed*/
