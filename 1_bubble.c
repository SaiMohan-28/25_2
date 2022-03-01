#include<stdio.h>
void bubble(int *arr, int n)
{
	int temp,flag;
	for(int i=0;i<n-1;i++)
	{
		flag=0;
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		return;
	}
}
void display(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
int main()
{
	int n=5,arr[5];
	printf("enter 5 elements\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Before sorting\n");
	display(arr,n);
	bubble(arr,n);
	printf("After Sorting\n");
	display(arr,n);
return 0;
}
