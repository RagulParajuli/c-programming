#include<stdio.h>

void main()
{
	int a[100],i,n,sum=0;
	printf("Enter your array size:");
	scanf("%d",&n);
	printf("Enter tour array elements:");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	a[i]=0;
	printf("Elements are:");
	for(i=2;i<=n;i++)
			{
			if(a[i]==a[i-1]+a[i-2])
			{
				printf("%d ",a[i]);
				sum+=a[i];
			}	
			}
		printf("\nThe total sum is %d",sum);
}
