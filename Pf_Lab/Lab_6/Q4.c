#include<stdio.h>
int main (){
float totaltime,e;
int size;
char type; 
puts("Enter The Types of Coffee");
puts("For Black Coffee Enter B");
puts("For White Coffee Enter W");
scanf(" %c",&type);
switch(type)
{
case 'b':
case'B':
puts("Puting Water will take 20 minutes");
puts("Adding Sugar will take 20 minutes");
puts("Mixing well will take 25 minutes");
puts("Adding cofee will take 2 minutes");
puts("Mixing well will take 25 minutes");
puts("For Duble Size Cup Enter 2 other wise enter 1");
scanf(" %d",&size);


switch (size){
	
case 2:
totaltime=20+20+25+2+25;
e=totaltime/100;
e=e*50;
totaltime=e+totaltime;
printf("You have to wait %.1f minutes for your double size coffee",totaltime); 

default:
totaltime=20+20+25+2+25;
printf("You have to wait %.1f minutes for your  coffee",totaltime);
break;
}
}
switch(type){

case 'w':
case 'W':
puts("Puting Water will take 15 minutes");
puts("Adding Sugar will take 15 minutes");
puts("Mixing well will take 20 minutes");
puts("Adding cofee will take 2 minutes");
puts("Adding Milk will take 4 minutes");
puts("Mixing well will take 20 minutes");
puts("For Duble Size Cup Enter 2 other wise enter 1");
scanf("%d",&size);
switch (size){
case 2:
totaltime=15+15+20+4+2+20;
e=totaltime/100;
e=e*50;
totaltime=e+totaltime;
printf("You have to wait %.1f minutes for your double size coffee",totaltime); 	
break;
default:
totaltime=15+15+20+4+2+20;
printf("You have to wait %.1f minutes for your coffee",totaltime); 			
}
}
}	
