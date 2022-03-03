#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,count=0,x=9;
	for(int i=5;i>0;i--)
	{
		for(int j=0;j<count;j++)
		{
			printf(" ");
		}
		for(int k=0;k<i;k++)
		{
			printf("%d",x);
			
		}
	x-=2;
	count++;
	printf("\n");
	}
return 0;
}
