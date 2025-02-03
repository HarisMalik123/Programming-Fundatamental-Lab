#include<stdio.h>
main()
{
	int students = 25;
	int totaltests = 1;
	int studentsdata[students][totaltests];
	int marks;
	int id;
	int testid;
	for(int i = 0; i< students; i++)
	{
		for(int v=0; v<totaltests;v++)
		{
			printf("Enter mark for Student #%d Test No %d",i+1,v+1);
			scanf(" %d",&marks);
			studentsdata[i][v] = marks;
		}
	}
	printf("Kindly Enter Student ID");
	scanf(" %d",&id);
   	printf("Kindly Enter TEST NO");
	scanf(" %d",&testid);
	id--;
	testid--;
    if(studentsdata[id][testid] >= 50 && studentsdata[id][testid] < 60 ) 
	printf(" Your Students %d has received a D Grade ",testid+1);
    else if(studentsdata[id][testid] >=60 && studentsdata[id][testid] <= 69 ) 
	printf("YOur Students %d has received a C Grade ",testid+1);
    else if(studentsdata[id][testid] >= 70 && studentsdata[id][testid] <= 79 ) 
	printf("Students %d has received a B Grade",testid+1);
else if(studentsdata[id][testid] >= 80 && studentsdata[id][testid] <= 100 ) 
printf("Students %d has received an A Grade ",testid+1);
else printf("Student has failed");
}
