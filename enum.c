#include<stdio.h>
int main()
{
	enum tag
	{
		sunday=20,
		monday,
		tuesday=12,
		wednesday,
	}var;
	printf("%ld",sizeof(sunday));
	printf("%ld",sizeof(var));
	printf("%ld",sizeof(tuesday));
}
