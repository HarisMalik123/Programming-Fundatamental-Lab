#include<stdio.h>
main()
{
int firstclass = 0;
int economy = 5;
int z = 0, k = 0, i = 0, v = 0,q = 0,ch,e = 0, j =0,total = 0,last;
int seats[10];
for(z = 0; z < 10; z++) seats[z] = 0;
while (1)
{
if(economy == 10 && firstclass == 5) 
{
printf("\No Seat Left\n"); break;
}
else
{
printf("If You want to go on First class Enter 1 for economy 2 for ending the booking enter 3\n");
scanf(" %d",&ch);
if (ch == 3)
{
break;
}

if(ch == 1 )
{
for(v = 0; v < 5 && q != 1; v++ )

if(seats[v] == 0) 
{
seats[v] = 1; q = 1;
firstclass++;
printf("%d",&firstclass);
if(	firstclass == 5) printf("Customer you have been assigned seat no %d in first_class\n",firstclass);
}
}
q = 0;

if(firstclass<5) printf(" you have booked seat no %d in First Class\n",firstclass); 
else 
printf("Seat are fulled in first class\n");
}
if(ch == 2)
{
for(i = 5; i < 10  && j!=1; i++)
{
if(seats[i] == 0)
{
seats[i] = 1;
j = 1;
printf(" you have been booked  seatno %d in economy\n",i+1);
economy++;
}

}	j = 0; if (economy == 10) printf("Seat are fulled\n");
}

printf("\n");
}

printf("\nSeats Booked");
for(int last = 0; last< 10; last++)
{
if(seats[last] == 1 )
printf("\nSEAT %d has been Booked",last);
 else
{
printf("\nSEAT #[%d] has not been Booked",last);
total++;
}
}
if(total != 10)
{
printf("\n%d Remaining Seats",total);
}
}
