#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int accountnum,begbalance,item,totalcredit,creditlimit,itemno,c=0,i;
	int balancenew;
    while(1)
    {
    	printf("Enter Your Account Num\n");
    	scanf("%d",&accountnum);
    	printf("Enter Balance You Had at the Beginning of the Month\n");
    	scanf("%d",&begbalance);
    	printf("How Many Product You Would like to enter\n");
    	scanf("%d",&itemno);
    	if(itemno==0)
    	{
    		printf("Plzz Enter Atleast One Produt");
		}
		else if(itemno>0){
		
    	for(i=1;i<=itemno;i++)
    	{
    	printf("Enter Your Product %d Charges\n",i);
		scanf("%d",&item);
		c=item+c;
		}
		printf("Your Total is %d\n",c);
			printf("Enter Total of Your Credit of This Month\n");
    	scanf("%d",&totalcredit);
    	printf("Enter Credit Limit\n");
    	scanf("%d",&creditlimit);
    	printf("\n \n \n \n \n \n \n \n __________________________________\n");
    	printf("Account Number: %d\n",accountnum);
    	printf("Credit Limit: %d\n",creditlimit);
    	balancenew=begbalance + c - totalcredit;
    	if(balancenew<=creditlimit)
    	{
    		printf("No Limit Exceed\n");
		}
		else{
			balancenew=balancenew-creditlimit;
			printf("The Credit limit Exceed By %d\n",balancenew);
		}
		printf("_____________________________________________________________________");
}
}
}
