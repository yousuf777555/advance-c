#include<stdio.h>
int main()
{
int base,power,result=1;
printf("enter the base and power");
scanf("%d%d",&base,&power);
for(int i=1;i<=power;i++)
{
result=result*base;
}
printf("%d",result);
}

