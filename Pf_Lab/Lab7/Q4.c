#include<stdio.h>
main(){
int num1,num2,num3,i,sum;
sum=0;
num2=1;
num1=0;
num3=0;
for(i=1;num3<1000;++i){

num1=num2;
num2=num3;
num3=num1+num2;
if(num3>1000)
{
	break;
}
else{

printf("%d\n",num3);   
if(num3%3==0 || num3%5==0 || num3%7==0)
{
sum=sum+num3;
}
}
}
printf("Sum Of The Fibonacci Numbers Which are divisble by 3 7 and 5 is %d",sum);    


}
