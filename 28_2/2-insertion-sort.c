#include<stdio.h>
#define S 5
void insertion_sort(int *arr)//5 3 2 4 1
{
	int temp,i,j;
	for(i=1;i<S;i++)
	{
		temp=arr[i];//temp=3
		j=i-1;//j=0
		while(j>=0 && arr[j]>temp)//comparing unsorted array
		{
			arr[j+1]=arr[j];//3 is replaced with 5
			j--;//j=-1
		}
		arr[j+1]=temp;//5 is replaced with 3
	}
}
void display(int *arr)
{
	for(int i=0;i<S;i++)
	{
		printf("%d\n",arr[i]);
	}
}
int main()
{
	int arr[S];
	printf("enter elements\n");
	for(int i=0;i<S;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("before insertion\n");
	display(arr);
	insertion_sort(arr);
	printf("after insertion\n");
	display(arr);
	return 0;
}
