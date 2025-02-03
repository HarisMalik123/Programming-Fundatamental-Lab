#include<stdio.h>
main()
{
int n = 3;
int A[3][3] = {{1, 0, 0}, {0, 1, 0}, {1, 1, 0}},arr[n] = {0},arr2[n] = {0};// Can Enter Other Values also
int reverse[3][3] = {0};
int i,j,k, s = 0, c = 0;

for(i = 0; i<n;i++)
{
int k = 0;
for(j =n-1; j >=0; j--)
{
reverse[i][j] = A[i][k];
k++;
}
}
for(i = 0; i<n;i++)
{
k= 0;

for(j = 0; j < n; j++)
{
if(reverse[i][j] == A[i][j] )
{
k++;
}
}
if(n == k) {
s++;
arr[i] = 1;
}
}

for(i = 0; i<n;i++)
{
k= 0;

for(j = 0; j < n; j++)
{
if(reverse[j][i] == A[j][i] )
{
k++;
}
}
if(n == k) {
c++;
arr2[i] = 1;
}
}
printf("\n");
if(s != 0 )
{
for(j = 0; j<3;j++)
{
if(arr[j] == 1) {
printf("%d R\n",j); 
break;}
}
}
if(s==0 && c != 0)
{
for(j = 0; j<3;j++)
{
if(arr2[j] == 1 ) {
printf("%d C\n",j);
break;}
}	
}

}
