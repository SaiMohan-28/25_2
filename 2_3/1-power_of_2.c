#include<stdio.h>
int main()
{
	int n,c=0;
	printf("enter a number:\n");
	scanf("%d",&n);
	while(n)
	{
	 n=n & (n-1);
	 c++;
	}
	(c==1)?printf("power of 2\n"):printf("not\n");
	return 0;
}
