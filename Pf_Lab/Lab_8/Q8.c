# include <stdio.h>
int main()
{
int i, j, k, n, num, sum, num1, num2,a=0;
printf("Enter the Number\n");
scanf("%d", &num);
printf("Enter the size of an array\n");
scanf("%d", &n);
int array[n];
for(i=0 ; i<n ; i++)
{
printf("Enter the Number in array %d\n", i);
scanf("%d", &array[i]);
}
for(i=0 ; i<n ; i++)
{
for(k=n-1 ; k>=0 ; k--)
{
sum=array[i];
for(j=i+1 ; j<=k ; j++)
{
sum=sum+array[j];
if((j==k) && (sum==num))
{
num1=i;
num2=j;
printf("from %d to %d\n", num1, num2);
a=0;
}
}
	
}		
}
if(a==1)printf("Not Found");
return 0;
}