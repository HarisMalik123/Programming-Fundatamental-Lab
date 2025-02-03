#include<stdio.h>
#include<string.h>
main()
{
int counta=0,countc=0,countnull=0;
	char ch[1000];
	puts("Kindly Enter Text");
	gets(ch);
	int size = strlen(ch);
	for(int i = 0; i < size; i++)
	{
	if(ch[i] >= 65 && ch[i] <= 90) 
countc++;
		if(ch[i] >= 97 && ch[i] <= 122) 
		counta++;
		if(ch[i] == ' ' ) 
		countnull++;
	}
	printf("Upper cases:%d\n",countc);
	printf("Lower Cases:%d\n",counta);
	printf("Spaces:%d",countnull);
}
