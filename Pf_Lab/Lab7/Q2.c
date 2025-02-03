//The weekday is true if it is a weekday, and the vacation is true if we are on vacation. We sleep in if it is not a weekday
//or we're on vacation. Print true if we sleep in.
#include<stdio.h>
int main(){

int weekdays,vacationdays,a;
printf("Enter Num 1 if its is a week day and 0 if it is not\n");
printf("Enter Num 1 if its is a vacations days too and 0 if it is not\n");
scanf("%d %d",&weekdays,&vacationdays);
if((weekdays>1)&&(vacationdays))
{
	printf("Please Follow previous intruction");
}
else{

if((weekdays>=1)&&(vacationdays >=1))
{
printf("both can not true");	
}
else if((weekdays<1)&&(vacationdays<1))
{
	printf("True You can Sleep");
}
else if((weekdays>=1)&&(vacationdays<1))
{
	printf("False You can not Sleep");
}
else if((weekdays<1)&&(vacationdays>=1))
{
	printf("True You can  Sleep");
}
}
}