# include<stdio.h>
void main()
{
	int i,j,n,m;
	printf("Enter a no.");
	scanf("%d",&n);
        
        for(i=1;i<=10;i++)
	{
		for(j=2;j<=n;j++)
		{
			m=j*i;
			printf("%dx%d=%d",j,i,m);
		    printf("\t");	
		}
	    printf("\n");
	}
}
