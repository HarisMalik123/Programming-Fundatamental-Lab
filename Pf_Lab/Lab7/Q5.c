#include<stdio.h>
int main()
{
	int n=1,b,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,z;
	printf("**************************************************Results Of Cy1B************************************************************\n");
for(z=1;z<=25;z++)
{
	int a=0;
	printf("Enter The Marks Of No%d student\n",z);
	scanf("%d",&a);
	if(a<=100)
	{
	
	if(a<50)
	{	
b=n+b;
	}
	if((a>=90)&&(a<=100))
	{
		c=n+c;
		printf("Outstanding Got A+ Grade\n");
	}
	if((a>=86)&&(a<=89))
	{
		d=n+d;
			printf("Excellent Got A Grade\n");
	}
	if((a>=75)&&(a<=85))
	{
		e=n+e;
			printf("Good Got B+ Grade\n");
	}
	if((a>=70)&&(a<=74))
	{
		f=n+f;
			printf("Average Got B- Grade\n");
	}
	if((a>=66)&&(a<=69))
	{
		g=n+g;
		printf("Below Average Got C+ Grade\n");
	}
	if((a>=62)&&(a<=65))
	{
		h=n+h;
			printf("Adequate Average Got C Grade\n");
	}
	if((a>=58)&&(a<=61))
	{
		i=n+i;
			printf("Pass  Got C- Grade\n");
	}
	if((a>=54)&&(a<=57))
	{
		j=j+n;
			printf("Pass  Got D+ Grade\n");
	}
	if((a>=50)&&(a<=53)){
	
	k=k+n;
		printf("Pass  Got D Grade\n");
}
if(a<50)
{
	printf("Fail Keep It Up\n");
}
}
else printf("Number Can not exceed 100\n");

}
printf("The List Of Students Who Got Grades\n");
printf("Outstanding Students and Those Who Got A+ Grade are %d\n",c);
printf("Excellent Students and Those Who Got A Grade are %d\n",d);
printf("Good Students and Those Who Got B+ are %d\n",e);
printf("Average Students and Those Who Got B- are %d\n",f);
printf("Below Average Students and Those Who Got C+ are %d\n",g);
printf("(Adequate Students and Those Who Got C Are %d\n",h);
printf(" Those Who Got C- Are %d (Pass)\n",i);
printf(" Those Who Got D+ Are %d (Pass)\n",j);
printf("Those Who Got D Are %d (Pass)\n",k);
printf("No Of Failed Students are %d\n",b);



}


