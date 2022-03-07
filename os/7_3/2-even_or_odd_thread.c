#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
int n=1,count=0;
void *fun(void *args)
{
	while(n<=20)
	{
		if(n%2==0)
		{
			printf("Even: %d\n",n);
			n++;
			count++;
			sleep(1);
		}
		else
		sleep(1);
	}
}
void *fun1(void *args)
{
	while(n<=20)
	{
		if(n%2!=0)
		{
			printf("Odd: %d\n",n);
			n++;
			count++;
			sleep(1);
		}
		else
		sleep(1);
	}
}
int main()
{
	pthread_t a_thread[2];
	pthread_create(&a_thread[0],NULL,fun,NULL);
	pthread_create(&a_thread[1],NULL,fun1,NULL);
	pthread_join(a_thread[0],NULL);
	pthread_join(a_thread[1],NULL);
	return 0;
}
