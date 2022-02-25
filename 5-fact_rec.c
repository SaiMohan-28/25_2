#include<stdio.h>
int fact(int n)
{
	int f;
	if(n==1)
	return 1;
	else
	return n*fact(n-1);	
}
int main()
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	printf("%d\n",fact(n));
	return 0;
}
