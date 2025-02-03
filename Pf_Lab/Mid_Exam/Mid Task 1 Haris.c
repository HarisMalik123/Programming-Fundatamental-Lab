#include<stdio.h>
#include<time.h>

#include<math.h>
#include<conio.h>
int main(){
 int empsal,hours,hoursrate;
 char gen;
 printf("In one Hour How Much Do You Charge");
 scanf("%d",&hoursrate);
 printf("Enter Your Gender");
 scanf(" %c",&gen);
 printf("How many Total hours you worked in One Month");
 scanf("%d",&hours);
 empsal=hours*hoursrate;
 if((gen=='M')||(gen=='m'))
 {
 	if(empsal<10000)
 	{
 		empsal=empsal+(empsal*0.2);
	 }
	 else if(empsal>10000)
	 {
	 	empsal=empsal=(empsal*0.5);
	 }
	 
 }
 else if((gen=='F')||(gen=='f'))
 {
 	if(empsal<10000)
 	{
 		empsal=empsal+(empsal*0.2);
	 }
	 else if(empsal>10000)
	 {
	 	empsal=empsal=(empsal*0.1);
	 }
 }
 printf("Your Total Salary After Discount is %d",empsal);
}


