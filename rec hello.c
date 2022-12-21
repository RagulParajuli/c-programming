#include<stdio.h>
void count(int n);
void main()
{
	int n;
	printf("Enter  your choice:");
	scanf("%d",&n);
	count(n);
}
//recersive function
void count(int n){
	if(n==0){
		return;
		
	}
	printf("Hello World\n");
	count(n-1);
	
}
