#include<stdio.h>
#include<string.h>
struct books{
char bid[100];
char author[100];
char title[100];
char issue[10];
};
int main(){
	int ch;
	int n=10;
	char a[100];
		char b[100];
			int ch2;
			int count1;
			char t[100];
	
struct books s[n];
strcpy(s[0].author,"Talha");
strcpy(s[0].bid,"22k-4777");
strcpy(s[0].title,"Power");
strcpy(s[0].issue,"No");
strcpy(s[1].author,"Haris");
strcpy(s[1].bid,"22k-4778");
strcpy(s[1].title,"War");
strcpy(s[1].issue,"No");
strcpy(s[2].author,"Fakhar");
strcpy(s[2].bid,"22k-4779");
strcpy(s[2].title,"Revolution");
strcpy(s[2].issue,"No");
strcpy(s[3].author,"Murtaza");
strcpy(s[3].bid,"22k-4780");
strcpy(s[3].title,"Hardwork");
strcpy(s[3].issue,"No");
strcpy(s[4].author,"Mujtaba");
strcpy(s[4].bid,"22k-4781");
strcpy(s[4].title,"Love");
strcpy(s[4].issue,"No");
strcpy(s[5].author,"Sabtain");
strcpy(s[5].bid,"22k-4782");
strcpy(s[5].title,"Nation");
strcpy(s[5].issue,"No");
strcpy(s[6].author,"Ammmar");
strcpy(s[6].bid,"22k-4783");
strcpy(s[6].title,"Bloods");
strcpy(s[6].issue,"No");
strcpy(s[7].author,"Ayaan");
strcpy(s[7].bid,"22k-4784");
strcpy(s[7].title,"programmig");
strcpy(s[7].issue,"No");
strcpy(s[8].author,"Mansoob");
strcpy(s[8].bid,"22k-4785");
strcpy(s[8].title,"Life");
strcpy(s[8].issue,"No");
strcpy(s[9].author,"Zulqarnain");
strcpy(s[9].bid,"22k-4786");
strcpy(s[9].title,"Butterfly");
strcpy(s[9].issue,"No");
printf("The Total Number Of Books in library are %d\n",n);
puts("******************************************");

puts("Enter 1 for Display Book information");
puts("Enter 2 for Adding a new book");
puts("Enter 3 For a name of aurthor whose book you want to read");
puts("Enter 4 for a book relating to your desired title");
puts("Enter 5 to know the total no books in library");
puts("Enter 6 to issue a book");
scanf(" %d",&ch);
switch (ch){
	case 1:


puts("Enter Title!");
scanf("%s",b);
	int result=0,i;
	for (i=0;i<n;i++)
	{
		result=strcmp(s[i].title,b);
		if (result==0){
			printf(" Title : %s\n",s[i].title);
				printf(" Book ID : %s\n",s[i].bid);
				printf("Author Name: %s\n",s[i].author);
				printf("Issued ?? %s\n",s[i].issue);
				break;
		}

	
	}
	
	if(result!=0) printf("Maybe you are using wrong spelling or book is not in library\n");
	result=0;
break;
case 2:
	n=n+1;
	for(i=10;i<n;i++)
	{
		printf("Enter Title of the book\n");
		scanf("%s",s[i].title);
		printf("Enter Book id\n");
		scanf("%s",s[i].bid);
		printf("Enter Author Name\n");
		scanf("%s",s[i].author);

		printf("Do You want to add more or not enter 1 for adding enter 2 for not");
		scanf("%d",&ch2);
		if(ch==2) break;
		else 		n=n+1;
		
	}
	printf("The Total Number of books after adding are %d",n);
	break;
	case 3:
		printf("Enter the Name of aurthor\n");
		scanf("%s",&a);
		for(i=0;i<n;i++)
		{
			result=strcmp(s[i].author,a);
			if(result==0)
			{
					printf(" Title : %s\n",s[i].title);
				printf(" Book ID : %s\n",s[i].bid);
				printf("Author Name: %s\n",s[i].author);
				printf("Issued ?? %s\n",s[i].issue);
				count1++;
			}
			
		}
	if(count1==0) printf("Not Found\n");
	result=0;
	count1=0;
	break;
case 4:
	printf("Enter Title\n");
	scanf("%s",t);
	for(i=0;i<n;i++){
		result=strcmp(s[i].title,t);
		if(result==0)
			{
					printf(" Title : %s\n",s[i].title);
				printf(" Book ID : %s\n",s[i].bid);
				printf("Author Name: %s\n",s[i].author);
				printf("Issued ?? %s\n",s[i].issue);
				count1++;
			}

		
	}
					if(count1==0) printf("Not Found\n");
	result=0;
	count1=0;
			
break;
}
}
