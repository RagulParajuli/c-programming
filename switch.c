
#include<stdio.h>
void main()
{
	int ch;
	printf("Will you be my girlfriend?\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("Yes, I would love to ");
		break;
		case 2:
		printf("Let's be friends");
		break;
		case 3:
		printf("No, Don\'t even come near me");
		break;
		default:
		printf("invalid choice");
	}
}	
