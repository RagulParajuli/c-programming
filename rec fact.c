#include<stdio.h>
void main()
{
	int n,f;
	printf("Enter a number:");
	scanf("%d",&n);
	f=fact(n);
	printf("The factorial is %d",f);
}
int fact(int x){
	if(x==1){
		return 1;
	}
	else{
		int m=fact(x-1);
		return(x*m);
	}
}
