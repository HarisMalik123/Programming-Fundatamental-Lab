#include<stdio.h>
int main(){

int num1,num2,sum=0,n,i=1,j=1,set=0,num3,rim,reverse;


printf("Enter The Number Whose Digits are five\n");
scanf("%d",&num1);
num3=num1;
if((num1>9999)&&(num1<100000)){


while(num1!=0)
{       
num2=num1%10;
sum=num2+sum;
num1=num1/10;
}
printf("Here the Sum is %d\n",sum);

if(sum%2==0){
for(i=1;i<=num3;i++)
{
	if((num3%i==0)&&(i!=1)&&(i!=num3))
	set=1;
}
	if(set==1)	
		printf("It is Not a Prime Num\n");
	else if(set==0)
		printf("It is Prime Number\n");	
}
else if(sum %2!=0)
sum=num3;
{
	while(sum!=0){
rim	=sum%10;
	reverse=reverse*10+rim;
	sum=sum/10;
}	
}
if(reverse==num3)

	printf("It is palindrome");
else	
	printf("It is Not a palindrome");
}
else printf("Kindly follow the instruction");

}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	






