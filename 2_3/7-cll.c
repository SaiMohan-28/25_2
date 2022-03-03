#include<stdio.h>
#include<stdlib.h>
typedef struct cll    
{
	int data;
	struct cll *link;
}cl;
cl *head=NULL;
void insert(int data)
{
	cl *new=NULL,*temp=NULL;
	new=(cl *)malloc(sizeof(cl));
	if(new==NULL)
	{
		printf("memory is not allocated\n");
	}
	else
	{
		if(head==NULL)
		{
			head=new;
			new->data=data;
			new->link=new;
		}
		else
		{
			new->data=data;
			new->link=head->link;
			head->link=new;
			head=new;
		 }
	}
}
void display()
{
	printf("Data Inserted\n");
	cl *temp=head;
	if(temp==NULL)
	{
		printf("List IS Empty\n");
	}
	else
	{
		temp=temp->link;
		do{
			printf("%d\n",temp->data);
			temp=temp->link;
		}while(temp!=head->link);
		
	}
}
void delete()
{
	cl *temp=head;
	while(temp->link!=head)
	{
		temp=temp->link;
	}
	temp->link=head->link;
	head=temp;
}
int main()
{
	int data;
	for(int i=1;i<=5;i++)
	{
		printf("enter data\n");
		scanf("%d",&data);
		insert(data);
	}
	display();
	delete();
	display();
}
