//calculate the sun of n numbers
#include<stdio.h>
void main()
{
	int n,f;
	printf("Enter a no.");
	scanf("%d",&n);
    f=sum(n);
	printf("The total is %d",f);
}
int sum(int n){
	if(n==1){
		return 1;
	}
	else{
		int m=sum(n-1);
		return(n+m);
	}
	

}
