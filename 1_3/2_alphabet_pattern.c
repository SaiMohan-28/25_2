#include<stdio.h>
int main()
{
	int n,c=0;
	char ch='A';
	printf("enter number\n");
	scanf("%d",&n);
	for(int i=5;i>0;i--)	
	{
		for(int j=1;j<=c;j++)
		{
			printf(" ");
		}
		for(int k=0;k<i;k++)
		{
			printf("%c",ch++);
		}
		c++;	
		ch=ch-i+1;
		printf("\n");
	}
	return 0;
}
