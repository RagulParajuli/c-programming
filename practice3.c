//calculate to find wheather a student is pass or fail
#include<stdio.h>
void main()
{
	float eng,math,phy,chem,tot,per;
	printf("Enter the marks of eng, math, phy, chem");
	scanf("%f%f%f%f",&eng,&math,&phy,&chem);
	tot=(eng+math+phy+chem)/180;
	per=tot*100;
	if(per>=40){
		printf("he is pass");
	}
	else{
	}
}

