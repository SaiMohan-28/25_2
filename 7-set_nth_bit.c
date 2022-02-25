#include<stdio.h>
int main()
{
	int n,p;
	printf("enter number\n");
	scanf("%d",&n);
	printf("enter position\n");
	scanf("%d",&p);
	if((n>>p)&0x1==1)
	printf("bit is set\n");
	else
	printf("%d\n",n|=(0X1<<p));
	return 0;
}
