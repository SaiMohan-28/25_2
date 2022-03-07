#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
char ch=65;
void *fun(void *p)
{
	while(ch<=90)
	{
		printf("%c ",ch);
		ch++;
		sleep(1);
	}
	printf("\n");
}
void *fun1(void *p)
{
	while(ch<=90)
	{
		printf("%c ",ch+32);
		ch++;
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
