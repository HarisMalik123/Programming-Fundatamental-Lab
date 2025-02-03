#include<stdio.h>
void swap();
 int main()
 {
 	swap();
 }
 void swap()
 {
 	int a,b,temp;
 	puts("Enter Two Numbers!");
 	scanf("%d %d",&a,&b);
 	printf("Two Numbers Before Swap is A = %d B = %d\n",a,b);
 	temp=a;
 	a=b;
 	b=temp;
 	printf("Number After Swap!! A = %d B = %d",a,b);
 }