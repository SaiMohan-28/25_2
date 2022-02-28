#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter number\n");
	scanf("%d",&n);
	for(int i=n;i>0;i--)
	{
		for(int j=1;j<=count;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
		count++;
	}
return 0;
}
