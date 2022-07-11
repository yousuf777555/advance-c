#include<stdio.h>
int main()
{
int a[10],fre[10],i,j;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
fre[i]=1;
}
for(i=0;i<10;i++)
{
if(fre[i]==0)
continue;
for(j=i+1;j<10;j++)
{
if(fre[i]==0)
continue;
if(a[i]==a[j])
{
fre[i]++;
fre[j]=0;
}
}
}
for(i=0;i<10;i++)
{
if(fre[i]!=0)
printf("%d %d times\n",a[i],fre[i]);
}
}

