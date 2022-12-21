//calculate area of sq,cir,rec
#include<stdio.h>
#include<math.h>
void main()
{
	int a,b;
	square(a);
	circle(b);
	rectangle(a,b);
}
void square(int l){
	printf("Enter length:");
	scanf("%d",&l);
	int a=pow(l,2);
	printf("The area of square is %d\n",a);
}
void circle(int r){
	printf("Enter radius:");
	scanf("%d",&r);
	int a=3.14*pow(r,2);
	printf("The area of circle is %d\n",a);
}
void rectangle(int l, int b){
	printf("Enter length and breath:");
	scanf("%d%d",&l,&b);
	int a=l*b;
	printf("The area of rectangle is %d\n",a);
}
