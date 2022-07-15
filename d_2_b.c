#include<stdio.h>
int main()
{
int a=10;
for(int i=0;i<8;i++)
{
if(a&(0x1<<i))
{
printf("1");
}
else
{
printf("0");
}
}
}

