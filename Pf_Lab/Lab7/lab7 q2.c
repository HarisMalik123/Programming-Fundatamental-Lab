#include<stdio.h>
int main(){
	int n,num,N,counteven=0,countodd=0,countfactor=0;
	float average;
	puts("On How Many Number You Want to Perform Calculations");
	scanf("%d",&N);
	if(N>10){
	
	do
	{
			{
		printf("Enter The Number\n");
		scanf("%d",&num);
		if(num%2==0)
		{
			printf("Number is Even\n");
			counteven++;
			if(num%3==0)
				printf("Number is Factor of Three Too \n");
				countfactor++;
		}
		else if(num%2!=0)
		{
					printf("Number is Odd\n");
					countodd++;
							if(num%3==0)
				printf("Number is Factor of Three Too \n");
				countfactor++;
					
		}
		average=num+average;
	}
	n=n+1;
	}while(n<N);
average=average/n;
printf("Here is Average %.2f\n",average);
printf("Numbers of Odd Number are %d\n",countodd);
printf("Numbers of Even Number are %d\n",counteven);
printf("Numbers of  Number which are factor of three are %d\n",countfactor);
}
else {
	puts("Numbers Should Be Greater Than 10");
}
}
