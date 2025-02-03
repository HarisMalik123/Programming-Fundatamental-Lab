#include<stdio.h>
int main(){

int num1,num2;
printf("Enter the number to get factorial\n");
scanf("%d",&num1);
num2=num1-1;
while(num2!=1)
{
	num1=num1*num2;
	num2--;
}
printf("Here is Factorial %d",num1);
}
// i used while loop becouse it will consume less memory i dont need to add a variable i or any on the other 
//do while loop first do and check so my factorial would be zero
