#include<stdio.h>
struct date {
	int date;
	int month;
	int year;
	
};
int main()
{ int i;
struct date d1[2];
for(i=0;i<2;i++)
{
	printf("Enter The Day of date %d\n",i+1);
	scanf("%d",&d1[i].date);
		printf("Enter The Month of date %d\n",i+1);
	scanf("%d",&d1[i].month);	
	printf("Enter The Year of %d\n",i+1);
	scanf("%d",&d1[i].year);
	
}
if ((d1[0].date==d1[1].date)&&(d1[0].month==d1[1].month)&&(d1[0].year==d1[1].year))
printf("Dates are Equal");
	else { printf("Date are not equal");
	}
}