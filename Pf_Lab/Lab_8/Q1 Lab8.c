// Depend On You it can be User Defined As well
#include<stdio.h>
int main(){
int i,k,j,n,l;
printf("Enter the dimension of matrix MxN form Number of rows \n");
scanf("%d",&n);
puts("Number of columns");
scanf("%d",&l);
int s[n][l];
int mat[n][l];
for(k=0;k<n;k++)
{
	for(j=0;j<l;j++)
	{
		printf("Enter The Element of [[%d],[%d]]",k,j);
		scanf("%d",&mat[k][j]);
	}
}
printf("Original Matrix\n");
for(i=0;i<n;i++)
{
	for(j=0;j<l;j++)
	{
		printf(" %d",mat[i][j]);
	}
	puts("");
}
for(i=0;i<n;i++)
{
	for(j=0;j<l;j++)
	{
		s[i][j]=mat[j][i];
	}
}
printf("Transpose Matrix\n");
for(i=0;i<n;i++)
{
	for(j=0;j<l;j++)
	{
		printf(" %d",s[i][j]);
	}
	puts("");
}

}
