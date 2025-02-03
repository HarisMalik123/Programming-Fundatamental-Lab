#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	char l1,l2,l3,l4,l5; // For USer Name 
	char w1,w2,w3,w4,w5; // for uSER nAME 
	char p1,p2,p3,p4,p5,p6; // fOR Password
	char t1,t2,t3,t4,t5,t6; // for password
	int i;
	printf("Enter Username\n");
	scanf("%c %c %c %c %c", &l1,&l2,&l3,&l4,&l5);
	puts("Enter The Password");
	puts("First Word Should be Capital and must consist on 6 letters");
	puts("Last Letter Of Your Password Must be Numeric");
scanf(" %c",&p1);
scanf(" %c",&p2);
scanf(" %c",&p3);
scanf(" %c",&p4);
scanf(" %c",&p5);
scanf(" %c",&p6);
	if((p1>=65)&&(p1<=90)&&(p6>=48)&&(p6<=57))
	{
		printf("Account Created Successfully\n");
		puts("Now Enter User Name and Password");
		for(i=1;i<=3;i++)
		{
			puts("Enter User Name");
scanf("  %c",&w1);
scanf("  %c",&w2);
scanf("  %c",&w3);
scanf("  %c",&w4);
scanf("  %c",&w5);
puts("Enter Password");		
scanf(" %c",&t1);
scanf(" %c",&t2);
scanf(" %c",&t3);
scanf(" %c",&t4);
scanf(" %c",&t5);
scanf(" %c",&t6);
		if((t1==p1)&&(t2==p2)&&(t3==p3)&(t4==p4)&&(t5==p5)&&(t6==p6)&&(l1==w1)&&(l2==w2)&&(l3==w3)&&(l4==w4)&&(l5==w5))
		{
			printf("Welcome\n");
			puts("You are Logged in");
			break;
	
													}
		else{
			puts("You Have Three Attempts Try Again");
		}											
			
		}
	}
	else{
		puts("Follow Instruction");
	}
}
