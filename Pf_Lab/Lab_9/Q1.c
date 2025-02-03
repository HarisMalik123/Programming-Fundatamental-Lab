#include<stdio.h>
int main()
{
int num1,fac;
puts("Enter Positive integer!");
scanf("%d",&num1);
fac=factorial(num1);
printf("Factorial = %d",fac);
return 0;
}
int factorial(int x)
{
	if(x!=0)
	{
		return x * factorial(x-1);
	}
	else 
	return 1;
}
