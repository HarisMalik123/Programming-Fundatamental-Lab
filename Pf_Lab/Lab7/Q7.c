#include<stdio.h>
int main()
{
	char ch1,ch2,ch3;
int count;	
	while(1)
	{
		printf("Enter 1st Alphabet\n");
		scanf(" %c",&ch1);
		printf("Enter 2nd Alphabet\n");
		scanf(" %c",&ch2);
		printf("Enter 3rd Alphabet\n");
		scanf(" %c",&ch3);
		count++;
		if((ch2-ch1== ch3-ch2)||(ch1-ch2==ch2-ch3))
		{
			printf("Sequence Matched ");
			break;
		}
		else 
		printf("Try Again \n");
	}
	printf("You have tried %d times ",count);
}
