#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct car{
char serial[3];
int ym;
char mat[10];
char quality[10];

};

int main(){
char sr[4]={'A','A','0'};
int i;
int j=0,k=0,p=1;
char material[7][10]={"Diamond","Copper","Silver","Gold","Iron","Aluminium","Titanium"};
int year[7]={2004,2005,2006,2007,1998,1990,2021};
char qual[7][10]={"Good","Excellent","Average","Bad","Expensive","Longlife","Cheap"};
struct car s1[60];
srand(time(NULL));
for (i=0;i<60;i++){



strcpy(s1[i].serial,sr);

sr[2]++;
if(sr[2]>57)
{
	sr[1]++;
sr[0]++;
sr[2]='0';
}

k=rand()%7; 
strcpy(s1[i].mat,material[k]);
strcpy(s1[i].quality,qual[k]);
s1[i].ym=year[k];
}
printf("List of B11 To C16\n");
for (i=11;i<27;i++)
{
	printf("*********************************\n");
	printf("Serial Num : %s\n",s1[i].serial);
	printf("Year Of Manufacture :%d\n",s1[i].ym);
	printf("Material : %s\n",s1[i].mat);
	printf("Quality : %s\n",s1[i].quality);
}


}

