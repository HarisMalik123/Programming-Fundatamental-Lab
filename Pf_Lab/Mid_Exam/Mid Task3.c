#include<stdio.h>
#include<time.h>
#include<math.h>
#include<conio.h>
int main()
{
	char  carda1,carda2,carda3,carda4,carda5;
	char cardb1,cardb2,cardb3,cardb4,cardb5;
	int alicewin=0,draw=0,bobwin;
	char choice,wina,winb,j,k,l,m,n;
	printf("For These Following Cards Enter J=11,Q=12,K=13,A=14\n");
	printf("For Heart Enter H For Diamond Enter D For Clubs Enter C For Spades Enter S");
	while(1)
	{
		puts("Alice! Tell me Your First Card");
		scanf(" %c",&carda1);
		puts("Alice! Tell me Your 2nd Card");
		scanf(" %c",&carda2);
		puts("Alice! Tell me Your Third Card");
		scanf(" %c",&carda3);
		puts("Alice! Tell me Your Fourth Card");
		scanf(" %c",&carda4);
		puts("Alice! Tell me Your Five Card");
		scanf(" %c",&carda5);
		puts("Now Bob! Enter Your First Card");
		scanf(" %c",&cardb1);
			puts("Now Bob! Enter Your 2nd Card");
		scanf(" %c",&cardb2);
			puts("Now Bob! Enter Your 3rd Card");
		scanf(" %c",&cardb3);
			puts("Now Bob! Enter Your Fourth Card");
		scanf(" %c",&cardb4);
			puts("Now Bob! Enter Your Fifth Card");
		scanf(" %c",&cardb5);
		if((carda1==carda2)&&(carda2==carda3)&&(carda1==carda4))
		{
			
			if((cardb1!=cardb2)&&(cardb1!=cardb3)&&(cardb1!=cardb3)&&(cardb1!=cardb4))
			{
				printf("Alice Win Because he has 4 of kind\n");
				alicewin=alicewin+1;
			}
		}
		else if((carda1==carda2)&&(carda1==carda3)&&(carda1==carda4))
		{
			if((cardb1==cardb2)&&(cardb1=cardb3)&&(cardb1==cardb3)&&(cardb1=cardb4))
			{
				printf("Draw Between Alice and Bob");
				draw=draw+1;
			}
		}
		else if((cardb1==cardb2)&&(cardb1==cardb3)&&(cardb1==cardb4))
		{
			if((carda1!=carda2)&&(carda1!=carda3)&&(carda1!=carda4))
			{
				printf("Bob  Win Because he has 4 of kind\n");
				bobwin=bobwin+1;
			}
		}
	else if(((((carda1==carda2)||(carda1==carda3)||(carda1==carda4))&&(carda2==carda3)||(carda3==carda4))&&(carda3==carda4)||(carda3==carda5))&&(carda4==carda5))
	{
		if((((cardb1!=cardb2)||(cardb1!=cardb3)||(cardb1!=cardb4))&&(cardb2!=cardb3)||(cardb3!=cardb4)&&(cardb3!=cardb4)))
		{
			printf("Alice Win");
				alicewin=alicewin+1;
			
		}
		
	}
		else if(((cardb1==cardb2)||(cardb1==cardb3)||(cardb1==cardb4))&&(cardb2==cardb3)||(cardb3==cardb4)&&(cardb3==carda4))
	{
		if((((carda1!=carda2)||(carda1!=carda3)||(carda1!=carda4))&&(carda2!=carda3)||(carda3!=carda4)&&(carda3!=carda4)))
		{
			printf("Bob Win");
		}
			else if(((cardb1==cardb2)||(cardb1==cardb3)||(cardb1==cardb4))&&(cardb2==cardb3)||(cardb3==cardb4)&&(cardb3==carda4))
	{
		if((((carda1==carda2)||(carda1==carda3)||(carda1==carda4))&&(carda2==carda3)||(carda3==carda4)&&(carda3==carda4)))
		{
			printf("Draw");
			draw=draw+1;}
	
	}
}
	else {
		printf("No Win");
			draw=draw+1;}
	
	printf("Do You Want to Continue Say Y For Yes Say N For No");
	scanf(" %c",&choice);
	if((choice=='Y')||(choice=='y')){
		printf("Number of Draws are %d",draw);
		printf("Alice Won %d time",alicewin);
		printf("Bob Won %d times",bobwin);
	}
	else if((choice=='N')||(choice=='n')){
		printf("Number of Draws are %d",draw);
		printf("Alice Won %d time",alicewin);
		printf("Bob Won %d times",bobwin);
}
		

}
}
