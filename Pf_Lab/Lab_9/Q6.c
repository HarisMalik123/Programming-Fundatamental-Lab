#include<stdio.h>

int LCM(int x,int y ,int n,int answer)
{
int p = answer;
if(x%n==0 && y%n==0)
{
x=x/n;
y=y/n;
printf("%d|",n);
printf("%d %d\n",x,y);	
p = p*n;
}
if(x%n==0 && y%n!=0)
{
x=x/n;
printf("%d|",n);
printf("%d %d\n",x,y);	
p = p*n;	
}
if(x%n!=0 && y%n==0)
{
y=y/n;
printf("%d|",n);
printf("%d %d\n",x,y);	
p = p*n;	
}
if(x%n != 0 && y%n != 0) n++;
if(x == 1 && y == 1) return p; else LCM(x,y,n,p);
} 
void GCD(int num1,int num2)
{
	int v = LCM(num1,num2,2,1);
	int ans = (num1*num2)/v;
	printf("GCD is: %d",ans); 
}
main()
{

int choice,num1,num2;
	printf("Press 0 for LCM and 1 for GCD");
	scanf(" %d",&choice);
	if(choice == 0)
	{
			printf("\nKindly Enter 1st Number");
		scanf(" %d",&num1);
		printf("\nkindly enter 2nd number to find LCM");
		scanf(" %d",&num2);
		LCM(num1,num2,2,1);
	}
	else
	{
		printf("\nKindly Enter 1st Number");
		scanf(" %d",&num1);
		printf("\nkindly enter 2nd number to find GCD");
		scanf(" %d",&num2);
	  	GCD(num1,num2);
	}
}
