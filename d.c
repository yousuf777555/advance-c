#include<stdio.h>
int isprime(int a);
int main()
{
int a,m,s;
printf("enter the starting and ending range");
scanf("%d %d",&a,&m);
for(int i=1;i<m;i++)
{
 s=isprime(a);
if(s==1)
{
printf("%d\t",a);
}
a++;
}
}
int isprime(int a)
{
int c=0;
for(int i=1;i<=a;i++)
{
if(a%i==0)
{
c++;
}
}
if(c==2)
{ 
return 1;
}
else
{
return 0;
}
}

