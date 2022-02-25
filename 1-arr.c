#include<stdio.h>
#include<stdlib.h>
#define S 5
void display(int **p_arg)
{
	for(int i=0;i<S;i++)
	{
		printf("%d\n",*(*p_arg+i));
	}
}
void scan(int **p_arg)
{
	for(int i=0;i<S;i++)
	{
		scanf("%d",*p_arg+i);
	}
}
int main()
{
	int *p;
	p=malloc(5*sizeof(int));
	scan(&p);
	display(&p);
	free(p);
	return 0;
}
