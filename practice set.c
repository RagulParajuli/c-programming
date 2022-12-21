// calculate the area of rectangle
//#include<stdio.h>
//void main()
//{
//	int l,b,A;
//	printf("Enter length and breath:");
//	scanf("%d %d",&l,&b);
//	A=l*b;
//	printf("Area is %d",A);
//}
//calculate  simple interest
#include<stdio.h>
void main()
{
	float p,r,t,si;
	printf("Enter principle, rate and time:");
	scanf("%f%f%f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("The simpe interest is %.2f",si);
	
}
