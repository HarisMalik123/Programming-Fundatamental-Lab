#include<stdio.h>
#include<string.h>

struct	student{
	char	Name[50];
	char	Last_Name[50];
	char	cell[14];
	char	email[50];
	
	struct	ragister{
		char	courseid[10];
		char	coursename[30];
	}r;
	
};

int	main(){
	
	struct	student	std[2];
	int	i;
	for(i=0;i<2;i++)
		{
			printf("\nEnter	First	Name	of	%d	student:\n",i+1);
			gets(std[i].Name);
			printf("Enter	Last	Name	of	%d	student:\n",i+1);
			gets(std[i].Last_Name);
			printf("Enter	Cell	Number	of	%d	student:\n",i+1);
			gets(std[i].cell);
			printf("Enter	Gmail	of	%d	student:\n",i+1);
			gets(std[i].email);
			printf("Enter	Course	ID	of	%d	student:\n",i+1);
			gets(std[i].r.courseid);
			printf("Enter	Course	Name	of	%d	student:\n",i+1);
			gets(std[i].r.coursename);
			
		}
		printf("\n\n\n\n");
	for(i=0;i<2;i++)
		{
			printf("First	Name	of	%d	student	is	:\n	",i+1);
			puts(std[i].Name);
			printf("Last	Name	of	%d	student	is	:\n	",i+1);
			puts(std[i].Last_Name);
			printf("Cell	Number	of	%d	student	is	:\n	",i+1);
			puts(std[i].cell);
			printf("Gmail	of	%d	student	is	:\n	",i+1);
			puts(std[i].email);
			printf("Course	ID	of	%d	student	is	:\n	",i+1);
			puts(std[i].r.courseid);
			printf("Course	Name	of	%d	student	is	:\n	",i+1);
			puts(std[i].r.coursename);
		}
	
	
	
	
}
