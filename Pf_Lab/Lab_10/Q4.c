#include<stdio.h>
#include<string.h>
#include<time.h>

struct info{
		char name[10];
			float sal;
	int hours;




};
struct info s[10];

int main()
{ 
int j,i,k,p;

//struct info s
//s[10]={"haris",M\}
//s[0].hours=8;
//s[0].name="Haris";
//s[0].sal=217.27;
//s[1].hours=10;
//s[1].name="Mujtaba";
//s[1].sal=300;
//s[2].hours=12;
//s[2].name="Fakhar";
//s[2].sal=400;
//s[3].hours=12;
//s[3].name="Murtaza";
//s[3].sal=100;
//s[4].hours=13;
//s[4].name="Saham";
//s[4].sal=50;
//s[5].hours=12;
//s[5].name="Sabtain";
//s[5].sal=1000;
//s[6].hours=8;
//s[6].name="Pasha";
//s[6].sal=900;
//s[7].hours=12;
//s[7].name="Mirza";
//s[7].sal=150;



//int salary[10]={8000,1000,2000,3000,3100,5000,4000,6000,5000,4300};
//int wh[5]={8,10,12,13,14};
//char n[10][20]={"Haris","Faris","Waris","Mujtaba","Murtaza","Noor","Hoor","Manzoor","Mansoor","Mehfooz"};
//srand(time(NULL));
//for (i=0;i<7;i++)
//{
//p=rand()%7+i;
//k=rand()%5+i;
//s[i].hours=wh[k];
//s[i].sal=salary[p];
//strcpy(s[i].name,n[p]);
//}
for (i=0;i<10;i++)
{

	printf("Enter Costumer Name\n");
	scanf("%s",&s[i].name);
	printf("Tell Us Your Salary!\n");
	scanf("%f",&s[i].sal);
	printf("Tell Us Your Working Hours\n");
	scanf("%d",&s[i].hours);
	if (s[i].hours==8)
	{
		printf("%s Your Privous Salary was $%.2f\n",s[i].name,s[i].sal);
		s[i].sal=s[i].sal+50;
		printf("%s Your Current Salary is $%.2f\n",s[i].name,s[i].sal);
	}
	else if(s[i].hours==10)
	{
		printf("%s Your Privous Salary was $%.2f\n",s[i].name,s[i].sal);
		s[i].sal=s[i].sal+100;
		printf("%s Your Current Salary is $%.2f\n",s[i].name,s[i].sal);
	}
		else if(s[i].hours>=12)
	{
		printf("%s Your Privous Salary was $%.2f\n",s[i].name,s[i].sal);
		s[i].sal=s[i].sal+150;
		printf("%s Your Current Salary is $%.2f\n",s[i].name,s[i].sal);
	}
	
}
}