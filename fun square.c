//calculate the square of a number
#include<stdio.h>
#include<math.h>
void main()
{
	int n,b;
	printf("Enter two no.");
	scanf("%d",&n);
	square(n);
}
void square(int y){
	 int c=pow(y,2);
	printf("The ans is %d",c);
}
