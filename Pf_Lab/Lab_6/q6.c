#include<stdio.h>
int  main(){


	int num;
	printf("Enter The Num");
	scanf("%d",&num);
	num%2==0?(num<0 ? printf("Num is negative  and even also"):printf("Num is positive and even also")): (num>0 ? printf("Num is odd and negative"):printf("Num is Odd"));
}
