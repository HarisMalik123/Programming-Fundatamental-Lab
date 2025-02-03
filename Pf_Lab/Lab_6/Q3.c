#include<stdio.h>
int main(){

int a,b,e;
printf("Enter The Num to check its divisible by 7");
scanf("%d",&a);
while(a!=0)
{
b=a%10;
a=a/10;
e=b*2;
e=e-a;
if((e==7)||(e==-7)||(e==0))
{

printf("It is Divisible by 7");
break;
}

}
}
