#include <stdio.h>
int main()
{
 int x;
 x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
 printf("Value of x:%d", x);
 printf("In This Statement x = 5 > 8 ? 10 : 1!=2 < 5 ? 20 :30 In Starting Compiler checks 5>8 which is untrue\n");
 puts("Then it will go on else condition 1!=2<5 here '<' has High Precedence So 2<5 its true so it will return one ");
 puts("now condtion becomes 1!=1 which is Untrue again  it will go on else condition and make x equal to 30");
 return 0;
}
now condtion becomes 1!=1
