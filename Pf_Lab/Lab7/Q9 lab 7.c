#include<stdio.h>
int main()
{
	int basesalary,sales;
	float netsalary;
	while(1){
	
	printf("Enter The Base Salary\n");
	scanf("%d",&basesalary);
	if(basesalary>=60000)
	{
	puts("Enter The How Much of Sales Worth You Make");
	scanf("%d",&sales);
	if(sales>=10000000)
	{
		netsalary=basesalary+(basesalary*0.035);
		printf("Your Netsalary is %.2f\n",netsalary);
	}
	else if(sales<=10000000)
	{
		netsalary=basesalary+(basesalary*0.02);
			printf("Your Netsalary is %.2f\n ",netsalary);
	}
	}
	else{
		puts("No One Salary less than 60000");
		break;
	}
}
}
