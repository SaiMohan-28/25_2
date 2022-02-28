#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
	int data;
	struct queue *link;
}q;
void enqueue(int data,q **rear_arg,q **front_arg)
{
	q *new=NULL;
	new=(q *)malloc(sizeof(q));
	if(new==NULL)
	printf("mem is not allocated\n");
	else
	{
		new->data=data;
		new->link=NULL;
		if(*rear_arg==NULL && *front_arg==NULL)
		{
			*rear_arg=new;
			*front_arg=new;
		}
		else
		{
			(*rear_arg)->link=new;
			*rear_arg=new;
		}
	}
	printf("enqued element is %d\n",(*rear_arg)->data);
}
void display(q **front_arg)
{
	q *temp=*front_arg;
	while(temp!=NULL)
	{
		printf("element is %d\n",temp->data);
		temp=temp->link;
	}
}
void dequeue(q **front_arg)
{
	q *temp=*front_arg;
	if(temp==NULL)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("dequed element is %d\n",temp->data);
		*front_arg=temp->link;
	}
}
int main()
{
	q *rear=NULL,*front=NULL;
	enqueue(10,&rear,&front);
	enqueue(20,&rear,&front);
	enqueue(30,&rear,&front);
	display(&front);
	dequeue(&front);
	dequeue(&front);
	dequeue(&front);
	dequeue(&front);
	display(&front);
	return 0;
}
