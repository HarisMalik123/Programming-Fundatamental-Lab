#include<stdio.h>
char a[100][100];
void per(int fix, int i, int j, int k, int n)
{
if(k==1)
{
int temp = i;
i = j;
j = temp;	
}
if(k==2)
{
int temp = fix;
fix = j;
j = temp;	
k = 0;
}
if(n!=0)
{
printf("\n%s %s %s",a[fix],a[i],a[j]);
k++;
n--;
per(fix,i,j,k,n);
}
printf("\n");
}
main()
{
int n;
printf("Kindly enter amount of string");
scanf("%d",&n);

for(int i = 0; i<n;i++) 
{
	printf("\nEnter %d String",i);
	scanf("%s",a[i]);
}

per(0,1,2,0,n*2);	
}
