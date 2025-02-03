#include<stdio.h>
#include<math.h>
int puzzle_solve(int route, int eroute,int mid, int i,int j)
{
if (i == 0)
{
return j;
}
else
{
puzzle_solve(route, mid, eroute,i - 1,j);
printf("\nMove disk %d from rod %d to rod %d ",i,route,eroute,j++); 
puzzle_solve(mid, eroute, route,i - 1,j);
}  
}
int main()
{
int num;
printf("Kindly enter number of disks");
scanf(" %d",&num);
int steps = pow(2,puzzle_solve(1, 3, 2,num,0))-1;
printf("\nTotal Steps are %d ",steps);
}
