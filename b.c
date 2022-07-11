#include<stdio.h>
int main()
{
	int n,m,i=0,j=0;
	printf("enter the numbers:");
	scanf("%d%d",&n,&m);
	while(j<31)
	{
		if(n & (0x1<<i) ^ (m&(0x1<<i)))
		{
			if(m&(0x1<<i))
			{
				n=n | (0x1<<i);
			}
			else
			{
				n=n & ~(0x1<<i);
			}
		}
               i++;
               j++;
	}
	printf("%d %d",n,m);
}

