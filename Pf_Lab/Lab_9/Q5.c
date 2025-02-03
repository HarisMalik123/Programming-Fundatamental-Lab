#include<stdio.h>
#include<math.h>


int reversenum(int x)
{
int rev = 0;
for(int i = 0; x != 0; i++)
{
rev = rev*10 + x%10;
x = x/10;

}
return rev;
}

main()
{
int num;

printf("Enter Num");
scanf("%d",&num);
int reversed = reversenum(num);
long long int num2 = pow(num,reversed);

printf("%lld",num2%1000000007);
}

