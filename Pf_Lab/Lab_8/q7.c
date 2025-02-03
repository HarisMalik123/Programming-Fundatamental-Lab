#include<stdio.h>
int main()
{
int size,i,sum=0;
float avg;
printf("Enter the Size of your array\n");
scanf("%d",&size);
int array[size];
puts("Start Entering elements");
for(i=0;i<size;i++)
{	
printf("Enter ELement No %d\n",i+1);
scanf("%d",&array[i]);
if(array[i]>0)
{	
sum = sum+array[i];
}
}

avg = sum/size;

printf("The Sum is %d\n",sum);
printf("The avg is %.2f\n",avg);
}