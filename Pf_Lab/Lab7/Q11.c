#include<stdio.h>
int main (){
	int i=0,l,sum;
	puts("Enter Number");
	scanf(" %d",&i);
	while(i!=0){
	l=i%10;
	i=i/10;
	sum=sum+l;}
	printf("Here Is The Sum %d",sum);
}

