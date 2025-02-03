struct que{
	int dateofbirth;
	char name[50];
	int ticketno;
};
void ticket_num(struct que s[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d %s",s[i].dateofbirth,s[i].name);
		printf("You are assigned ticket num %d",i+1);
	}
	
}
int main()
{
	 printf("Enter How Many Person That are wating for cnic or other work");
	 int n;
	 scanf("%d",&n);
	struct que s[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&s[i].dateofbirth);
		scanf("%s",s[i].name);
	}
	ticket_num(s, n);
	
}
