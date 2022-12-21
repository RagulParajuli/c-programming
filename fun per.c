//calulate percentage of 3 subjects
#include<stdio.h>
void main()
{
	int phy,chem,math,per;
	printf("Enter phy,chem and math:");
	scanf("%d%d%d",&phy,&chem,&math);
	per=perc(phy,chem,math);	
      printf("The percentage is %d",per);	
}
int perc(int phy, int chem, int math){
int total=(phy+chem+math)/300;
int per=total*100;
return (per);

}
