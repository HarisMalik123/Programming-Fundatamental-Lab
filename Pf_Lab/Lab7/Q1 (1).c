//Write a program that asks for the number of calories and fat grams in a food. The program should display the percentage
///of calories that come from fat
//One gram of fat has 9 calories, so Calories from fat = fat grams * 9
//The percentage of calories from fat can be calculated as: calories from fat/total calories
//Input validation: Make sure the number of calories and fat grams are not less than 0.
//Also, the number of calories from fat cannot be greater than the total number of calories. If that happens, display an
//error message indicating that either the calories or fat grams were incorrectly entered.
#include<stdio.h>
int main(){

float fat,n_calories,percentage,graminfats;
printf("Enter The Fat in Gram\n");
scanf("%f",&fat);
printf("Enter The No of Calories that are Required\n");
scanf("%f",&n_calories);
printf("Each One Gram of Fat Contains 9 calories\n");
if((fat<0)&&(n_calories<0))
{
printf("invalid input");
}
else
{
	fat=fat*9;
percentage=fat/n_calories;
percentage=percentage*100;
printf("Percantage of calories = %.1f\nThis is the percentage of calories you are taking as compared to your requirement\n",percentage);
} 
if(percentage>=100)
{
	printf("You are taking more calories as compared to your target");
}

}


