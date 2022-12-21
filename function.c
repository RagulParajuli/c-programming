#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter your no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
//		function call
	add();  	
	}
	
}
//function defination
void add()
{
	int a,b,c;
	printf("Enter 2 no.");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("The sum is %d\n",c);
}
/* her  i  declared function at bottom and called it upside to print it.
but i wanted to print as many as time i wanted so, i used loop to print it by getting input from user
wew can also declare many function like this and print it in single step.
Eg. remote, chessboard,etc
gather functions which do different task for a single output */
