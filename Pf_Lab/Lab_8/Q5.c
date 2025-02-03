#include<stdio.h>
main()
{
	char Product[5][20] = {"Product1","Product2","Product3","Product4","Product5"};
	int prices[5][20] ={{1000},{2000},{5000},{7000},{8000}};
	int sales[5][1000];



	int i = 0,id,e = 0,product_ID,g=0,r=0,q,total=0,total2=0,choice,s,j;


while(j != -1)
{
	while(i != -1)
	{
		if(e == 0) 
		{
		printf("Enter The ID Of Sales Person\n(1 to 5)");
		scanf(" %d",&id);
		if (id < 1 || id > 4) e = 1;  
		else i = -1;
	    }
	    if (e == 1)
	    {
	    printf("Kindly Follow instruction ");
		scanf("%d",&id);
     	if (id > 0 && id < 5) 
		{ 
			e = 0; i = -1;
		}
		
   	}
}
while ( s != -1)
{
	while(r != -1)
	{
		if(e == 0) 
		{
		printf("Kindly enter Product ID ");
		scanf(" %d",&product_ID);
		if (product_ID < 1 || product_ID > 5) e = 1;  else r = -1;
	    }
	    if (e == 1)
	    {
	    printf("Kindly Enter the Product ID only between 1-5 ");
		scanf(" %d",&product_ID);
     	if (product_ID > 0 && product_ID < 5) 
		{ 
			e = 0; r = -1;
		}		
   	}
   	
}

printf("\nKindly Enter the Quantity of %s you sold ",Product[product_ID-1]);
scanf(" %d",&q);
total = q*prices[product_ID-1][0];
sales[id-1][product_ID-1] = total;
total = 0; 
printf("Do you want to enter sales for other product Salemasman[%d]. Press 1 for Yes and 0 for no ",id);
scanf(" %d",&choice);
if (choice == 0 ) s = -1; 
else r = 2;
}
choice= 3;
printf("Do you want to enter the data for another salesman? Press 1 for Yes and 0 for no ");
scanf(" %d",&choice);
if (choice == 0 ) j = -1;
 else
{
j = 2;
i = 0;
s = 0;
r = 0;
}
}
printf("\t");
		for (int v = 0; v < 6; v++)
{
printf("\t%s",Product[v]);
}
printf("\n");
for (int k = 0; k < 4; k++)
{
	printf("Salesman[%d]",k+1);
	for (int o = 0; o < 5; o++)
{
printf("      \t %d",sales[k][o]);
}
printf("\n");
}
printf("\nTotal\t");
for(int u = 0; u<5; u++)
{
	for (int p = 0; p<4;p++)
	{
	total2=total2+sales[p][u];
	}
	printf("           \t %d",total2);
	total2 = 0;
}
}
