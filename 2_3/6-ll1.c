#include<stdio.h>
#include<stdlib.h>
#define S 5
typedef struct ll
{
	int data;
	struct ll *link;
}l;
l *head=NULL;
void insert(int data)
{
	l *new=NULL,*temp=NULL;
	new=(l*)malloc(sizeof(l));
	if(new==NULL)
	{
		printf("mem not alloctaed\n");
	}
	else
	{

		if(head==NULL)
		{
			head=new;
		}
		else
		{
			temp=head;
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}	
			temp->link=new;
		}
		new->data=data;
		new->link=NULL;
	}
}
void display()
{
	printf("List Is\n");
	l *temp=head;
	if(temp==NULL)
	{
		printf("List Is empty\n");
	}
	while(temp)
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
int search(int element)
{
	l *temp=head;
	if(temp==NULL)
	{
		printf("List is Empty\n");
	}
	else
	{
		while(temp)
		{
			if(temp->data==element)
			{
				printf("element found\n");
				return 0;
			}
			else
				temp=temp->link;
		}
		printf("element not found\n");
	}
}
void delete(int data)
{
	l *temp=head,*p=0;
	while(temp->link->data!=data)
	{
		temp=temp->link;
		
	}
	p=temp->link;
	temp->link=p->link;
}
int main()
{
	int data,i,element;
	for(i=1;i<=S;i++)
	{
		printf("enter data : ");
		scanf("%d",&data);
		insert(data);
	}
	display();
	printf("enter element to search : ");
	scanf("%d",&element);
	search(element);
	delete(30);
	printf("After deleting\n");
	display();
	return 0;
}
