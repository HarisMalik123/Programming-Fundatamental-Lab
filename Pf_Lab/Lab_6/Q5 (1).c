 //B= Burger 200
//·// F= French Fries 50
//· P= Pizza 500
//· S= Sandwiches 150

#include<stdio.h>
int main(){

int combination,quantity,quantity2,totalprice,d;
char order,order2;
printf("                                   H Cubes Online Restaurant Management System                                   \n");
printf("                                                    Welcome!                                                             \n\n");
puts("Please Select From The Following Menu");
puts("Press Following alphabets for following things");
puts("B =   Burger");
puts("F =   French Fries");
puts("P =   Pizza");
puts("S =   Sandwiches");
puts("How many snaks do you want you can only  order a combination of  two snacks at a time");
puts("How many types of snacks you need to order");
scanf(" %d",&combination);
if(combination>=3)
{
puts("Please Follow instructions");
}
else if (combination==2)
{
puts("Enter First Snacks You Want To Order");
scanf(" %c",&order);
switch (order){

case 'B':
case 'b':
puts("Please Provide Quantity");
scanf("%d",&quantity);
fflush(stdin);
d=200*quantity;

break;
case 'P':
case 'p':
puts("Please Provide Quantity");
scanf(" %d",&quantity);
fflush(stdin);
d=500*quantity;
break;
case 'F':
case 'f':
puts("Please Provide Quantity");
scanf(" %d",&quantity);
fflush(stdin);
d=50*quantity;
break;


case 'S':
case 's':
puts("Please Provide Quantity");
scanf(" %d",&quantity);
fflush(stdin);
d=150*quantity;
break;


}
puts("Enter Second Snack you want to order");
scanf(" %c",&order2);

switch (order2){




case 'B':
case 'b':
puts("Please Provide Quantity");
scanf("%d",&quantity2);
quantity2=200*quantity2;
break;
case 'P':
case 'p':
puts("Please Provide Quantity");
scanf("%d",&quantity2);
quantity2=500*quantity2;
break;
case 'F':
case 'f':
puts("Please Provide Quantity");
scanf("%d",&quantity2);
quantity2=50*quantity2;
break;
case 'S':
case 's':
puts("Please Provide Quantity");
scanf("%d",&quantity2);
quantity2=150*quantity2;
break;

}
printf("------------------------------------------------------------------------------------------------------\n");

printf("You Have Ordered\n");
printf("1st Snack with prize is %d\n",d);
printf(" 2nd snack with price is %d\n",quantity2);
totalprice=d+quantity2;
printf("Your  Total Price is %d\n",totalprice);
printf("Thank You for order\n");

}
else if (combination==1)
{

puts("Enter  Snack You Want To Order");
scanf(" %c",&order);
switch (order){

case 'B':
case 'b':
puts("Please Provide Quantity");
scanf("%d",&quantity);
quantity=200*quantity;
break;
case 'P':
case 'p':
puts("Please Provide Quantity");
scanf("%d",&quantity);
quantity=500*quantity;
break;
case 'F':
case 'f':
puts("Please Provide Quantity");
scanf("%d",&quantity);
quantity=50*quantity;
break;

break;
case 'S':
case 's':
puts("Please Provide Quantity");
scanf("%d",&quantity);
quantity=150*quantity;
break;
}
printf("------------------------------------------------------------------------------------------------------\n");
printf("You Have Ordered\n");
printf("1st Snack with prize is %d\n",quantity);
totalprice=quantity;
printf("Your  Total Price is %d\n",quantity);

}
}
