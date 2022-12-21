//pointers in function
#include<stdio.h>
void main()
{
	int n,ad;
	printf("Enter a number:");
	scanf("%d",&n);
	square(n);
int	add=n;
	printf("The value is %d",add);
}
void square(int x) {
	x=x*x;
int	*ad=&x;
int **add=&ad;
	printf("The square is %d\n",**add);
}
