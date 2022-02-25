#include<stdio.h>
#include<stdlib.h>
typedef struct stll
{
	int data;
	struct stll *link;
}st;
void push(st **top_arg,int n)
{
	st *new=NULL;
	new=(st*)malloc(sizeof(st));
	if(new==NULL)
	{
		printf("mem not allocated\n");	
	}
	else
	{
		new->data=n;
		new->link=NULL;
		if(*top_arg==NULL)
		{
			*top_arg=new;
		}
		else
		{
			new->link=*top_arg;
			*top_arg=new;
		}
		printf("pushed element is =%d\n",new->data);
	
	}
}
void pop(st **top_arg)
{
	if(*top_arg==NULL)
	{
		printf("stack is empty\n");
	}
	else
	{
		st *temp=*top_arg;
		*top_arg=temp->link;
		printf("popped element is %d\n",temp->data);
		free(temp);
	}
}
void peek(st **top_arg)
{
	if(*top_arg==NULL)
	{
		printf("stack is empty\n");
	}
	else
	{
		st *temp=*top_arg;
		printf("top element is %d\n",temp->data);
		free(temp);
	}
}
void display(st **top_arg)
{
	if(*top_arg==NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		st *temp=*top_arg;
		while(temp!=NULL)
		{
			printf("element is %d\n",temp->data);
			temp=temp->link;
		}
		free(temp);
	}
}
int main()
{
	st *top=NULL;
	push(&top,10);
	push(&top,20);
	push(&top,30);
	display(&top);
	//peek(&top);
	pop(&top);
	pop(&top);
	pop(&top);
	display(&top);
	return 0;
}
