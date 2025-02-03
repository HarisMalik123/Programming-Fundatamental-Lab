#include<stdio.h>
#include<string.h>

struct data{
	int roln;
	char name[100];
	char dep[100];
	char cse[100];
	int yoj;

};
int main()
{ 
int i;
	struct data s1[7];
//char nam[7][100];
	for (i=0;i<2;i++)
		{
		printf("Enter The role no of student %d\n",i+1);
		fflush(stdin);
		scanf("%d",&s1[i].roln);
		printf("Name!\n");
		fflush(stdin);
		gets(s1[i].name);
		printf("Department!\n");
		fflush(stdin);
		gets(s1[i].dep);
		printf("Course!\n");
		fflush(stdin);
		gets(s1[i].cse);
		printf("Year Of Joining\n");
		fflush(stdin);
		scanf("%d",&s1[i].yoj);
	}
	int y;
	int r;
	printf("Enter Year\n");
	fflush(stdin);
	scanf("%d", &y);
	printf("Students who joined in this year :\n");
	
for (i=0;i<7;i++)
	{
		if (s1[i].yoj==y)
		{
			puts(s1[i].name);
		}
	}
//		printf("%s",nam[i]);
//	}
printf("Enter The  role no which you want see!\n ");
scanf("%d",&r);
puts("The Date Of Given Role No Students");
for (i=0;i<7;i++)
{
	if(r==s1[i].roln){
		printf("Role No: %d\n",s1[i].roln);
			printf("Name : %s\n",s1[i].name);
			printf("Department : %s\n",s1[i].dep);
			printf("Course: %s\n",s1[i].cse);
			printf("Year Of Joining : %d",s1[i].yoj);
	}
}
}