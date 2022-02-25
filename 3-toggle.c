#include<stdio.h>
int main()
{
	int n,p;
	printf("enter number\n");
	scanf("%d",&n);
	printf("enter position\n");
	scanf("%d",&p);
	printf("getting bit %d\n",(n>>p)&0x1);
	printf("%d\n",n^=(0x1<<p));
	return 0;
}
