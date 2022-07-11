

#include<stdio.h>
#include<string.h>
int main()
{
void 
char a[]="kernel",b[]="master";
int i,j,len,len1,flag;
len=strlen(a);
len1=strlen(b);
char *p=a;
char *p1=b;
for(i=0;i<len && i<len1;i++)
{
if(*p!=*p1)
{
flag=0;
break;
}
else
{
p++;
p1++;
flag1;
}
}
if(flag==1)
{
printf("equal");
}
else
{
printf("not equal");
}

