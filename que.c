#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL,*newNode,*temp;
void enqueue()
{
    newNode = (struct node *) malloc(sizeof(struct node));
    int element;
    printf("enter the element to be inserted\n");
    scanf("%d",&element);
    newNode->data = element;
    newNode->next = NULL;

    
    if(front == NULL && rear == NULL)
        
        front = rear = newNode;
    else
    {
        
        rear->next = newNode;

        
        rear = newNode;
    }
}
void dequeue()
{
    struct node *temp;

    if(front == NULL)
         printf("Queue is Empty. Unable to perform dequeue\n");
    else
    {
        temp = front;

       
        front = front->next;
	temp->next=NULL;
      
       free(temp);
    }

}
void printList()
{
    struct node *temp = front;
    if(front == NULL)
    {
	    printf("queue is empty\n");
    }
    else
    {
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
    }
}
int main()
{
	int a,c=1;
	//printf("\n1) enqueue the list\n2)dequeue the list\n3)print the list\n4)quit\n");
	while(c)
	{
		 printf("1) enqueue the list\n2)dequeue the list\n3)print the list\n4)quit\n");

		 printf("\nenter the option:\n");
        scanf("%d",&a);

		switch(a)
		{
			case 1:
				enqueue();
				break;
			case 2:dequeue();
			       break;
			case 3:
			       printList();
			       break;
			case 4:c=0;
			       break;
			default:
			       printf("wrong input\n");
		}
	}
}


