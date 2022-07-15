#include<stdio.h>
#define SIZE 10

void push(int);
void pop();
void display();
void getmin();
int stack[SIZE], top = -1;
void main()
{
	int value, choice,c=1;

	while(c){
		printf("\n\n***** MENU *****\n");
		printf("1. Push\n2. Pop\n3. Display\n4. getmin\n5.exit\n");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("Enter the value to be insert: ");
				scanf("%d",&value);
				push(value);
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: getmin();
				break;
			case 5:c=0;
			       break;
			default: printf("\nWrong selection!!! Try again!!!");
		}
	}
}
void push(int value){
	if(top == SIZE-1)
		printf("\nStack is Full!!! Insertion is not possible!!!");
	else{
		top++;
		stack[top] = value;
		printf("\nInsertion success!!!");
	}
}
void pop(){
	if(top == -1)
		printf("\nStack is Empty!!! Deletion is not possible!!!");
	else{
		printf("\nDeleted : %d", stack[top]);
		top--;
	}
}
void display(){
	if(top == -1)
		printf("\nStack is Empty!!!");
	else{
		int i;
		printf("\nStack elements are:\n");
		for(i=top; i>=0; i--)
			printf("%d\n",stack[i]);
	}
}

void getmin()
{
	int min=0,temp;
	temp=stack[top];
	min=temp;
	for(int i=top;i>=0;)
	{
		if(temp<min)
			min=temp;
		temp=stack[--i];
	}
	printf("min=%d",min);
}

/* output
 ****** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 1
Enter the value to be insert: 7

Insertion success!!!

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 	1
Enter the value to be insert: 33

Insertion success!!!

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 3

Stack elements are:
33
7


***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 1
Enter the value to be insert: 5

Insertion success!!!

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 1
Enter the value to be insert: 10

Insertion success!!!

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 1
Enter the value to be insert: 3

Insertion success!!!

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 3

Stack elements are:
3
10
5
33
7


***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 1
Enter the value to be insert: 100

Insertion success!!!

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 1
Enter the value to be insert: 25

Insertion success!!!

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 3

Stack elements are:
25
100
3
10
5
33
7


***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 2

Deleted : 25

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 4
min=3

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 2

Deleted : 100

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 4
min=3

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 2

Deleted : 3

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 4
min=5

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 2

Deleted : 10

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 4
min=5

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 2

Deleted : 5

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 4
min=7

***** MENU *****
1. Push
2. Pop
3. Display
4. getmin
5.exit

Enter your choice: 
*/
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
