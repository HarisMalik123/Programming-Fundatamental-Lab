#include<stdio.h>
int main()
{
	float gpa;
	printf("Please Enter Your Gpa Do not feel fear from result\n");
	scanf("%f",&gpa);
	if((gpa>=0)&&(gpa<1)){
	
	puts("Failed Semester Registration suspended");}
	else if((gpa>=1)&&(gpa<2)){
	
	
	puts("On probation to next semester");}
		else if((gpa>=2)&&(gpa<3)){
		
	puts("No Message");}
	else if((gpa>=3)&&(gpa<3.5)){
	
	puts("Dean's list for semester");}
	else if((gpa>=3.5)&&(gpa<4)){
	
	puts("Highest Honor For Semester");}
}
