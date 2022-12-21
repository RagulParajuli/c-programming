#include<stdio.h>
void main()
{
	char i,f,ch;
	printf("Enter your choice between i&f:");
	scanf("%c",&ch);
	if(ch=='i'){
		indian();
	}
	else if (ch=='f'){
		french();
	}
	else{
		printf("");
	}
}
void indian()
{
	printf("Namaste");
}
void french()
{
	printf("Bonjour");
}
