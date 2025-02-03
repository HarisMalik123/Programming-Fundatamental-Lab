#include<stdio.h>
#include<time.h>

#include<math.h>
#include<conio.h>
int main()
{
	int cheeslice,tomatoslice,i=4,j=1,k=2,l=1,add,add2,add3;
	printf("Enter The Number of tomato slices");
	scanf("%d",&tomatoslice);
	printf("Enter The Number of Cheese Slices You Have");
	scanf("%d",&cheeslice);
	add=cheeslice+tomatoslice;
add2=i+j;
add2=add%add2;
if(add==0)
{
	printf("No ingredient will be Wasted");
}
else if(add!=0)
{
	add3=add2%(k+l);
}
if(add3==0)
{
	printf("No ingridient Will be wasted");
}
else {
	printf("ingridient will be Wasted");
}
}
