#include<stdio.h>
int main()
{
	int n,j=n-1,i,k;
	printf("Enter the size of your array\n");
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(i=0;i<n;i++)
	{
		printf("Enter The Element of Position %d\n",i);
		scanf("%d",&a[i]);
	}
for(j=n-1,i=0;j>=0;j--,i++){
b[i]=a[j];}
for(k=0;k<n;k++)
{
	printf(" %d ",b[k]);
}

}