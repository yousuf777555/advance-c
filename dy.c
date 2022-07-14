#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p=(int *)malloc(9*sizeof(int));
if(p==NULL)
printf("sorry try again");
else
{
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter the element:");
scanf("%d",(p+j));
}
}
printf("\n\t");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\n",*(p+j));
}
printf("\n");
}
}
}

