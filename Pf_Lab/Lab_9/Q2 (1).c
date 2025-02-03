#include<stdio.h>
void string(char ch[]);
int main()
{ 
int n;
	printf("Enter How Many letters do you want to enter\n");
	scanf("  %d",&n);
		printf("Enter Sentence!\n");
	char ch[n];
scanf("%s",ch);
string(ch);
}
void string(char ch[])
{
	char ch1,ch2,temp;
	int i,j,count,count1,choice;
	while(1)
	{
		printf("Enter Replacement Character!\n ");
		scanf(" %c",&ch1);
		printf("Enter Character to be replaced\n");
			scanf(" %c",&ch2);
			for (i=0;ch[i]!='0';i++)
			{
				if(ch1==ch[i]){
					break;
				}
				count++;
			}
			for (j=0;ch[j]!='0';j++)
			{
				if(ch2==ch[j]){
					break;
				}
				count1++;
			}
			temp=ch[count];
			ch[count]=ch[count1];
			ch[count1]=temp;
			puts("Do You want to replace other character if yes enter two else one");
			scanf("%d",&choice);
			if(choice==2)
			break;
	}
	printf("%s",ch);
	
}