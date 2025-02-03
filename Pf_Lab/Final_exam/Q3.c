#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	gets(str);
	int k=0;
	int arr[100]={3,1,4,1,5,1,9,2,6,5,3,5,8,9,7,9,3,2,3,8};
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		continue;
		str[i]=str[i]+arr[k];
		k++;
		if(k>=19)
		{
			k=0;
		}
	}
	FILE *fp=fopen("Haris.txt","w");
	fputs(str,fp);
	fclose(fp);
	
}