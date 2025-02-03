#include<stdio.h>
#include<stdlib.h>
int main(){
	int **ptr;
	int r,l,i;
printf("Enter The Size of Row");
scanf("%d",&r);
printf("Enter The Size Of Colum");
scanf("%d",&l);
ptr=(int**)calloc(4,sizeof(int*));
for(i=0;i<l;i++){
	ptr[i]=(int*)calloc(5,sizeof(int*));
}
for(i=0;i<r;i++)
{
	for(int j=0;j<l;j++)
	{
		scanf("%d",&
		ptr[i][j]);
	}
}
for(i=0;i<r;i++)
{
	for(int j=0;j<l;j++)
	{
		printf("%d",ptr[i][j]);
	}
	puts("");
}
int pos1,pos2,pos3,pos4;
printf("Enter Position For ELement In ROw 1 Row 2 Row 3 Row 4 you want to swap");
scanf("%d %d %d %d",&pos1,&pos2,&pos3,&pos4);
for(int i=pos1;i<5;i++)
{
ptr[0][i]=ptr[0][i+1];
}
for(int i=pos2;i<5;i++)
{
ptr[1][i]=ptr[0][i+1];
}
for(int i=pos3;i<5;i++)
{
ptr[2][i]=ptr[0][i+1];
}
for(int i=pos4;i<5;i++)
{
ptr[3][i]=ptr[0][i+1];
}
ptr[0][5-1]=0;
ptr[1][5-1]=0;
ptr[2][5-1]=0;
ptr[3][5-1]=0;
for(int i=0;i<4;i++)
{
	for(int j=0;j<5;j++){
		printf(" %d ",ptr[i][j]);
	}
}

}