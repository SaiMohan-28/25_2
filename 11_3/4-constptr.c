#include<stdio.h>
void constant_ptr(void)
{
	int x=10,y=20;
	int *const ptr=&x;//ptr is constant
//	ptr=&y;//change of address is not allowd  (error)
        *ptr=30;//valid(we can update the value by ptr by deferencing)
	printf("%d\n",*ptr);
}
void ptr_to_constant()
{
	int x=10,y=20;
	int const *ptr=&x;//the address location pointed by ptr is constant
	ptr=&y;//valid(we can point to another address location)
      //*ptr=30;//error(cannot change the value )
	printf("%d\n",*ptr);
	
}
void constant_pointer_to_constant()
{
	int x=10,y=20;
	const int* const ptr=&x;//both ptr and *ptr cannot be used to modify
//	*ptr=20;//error(cannot change the value )
//	ptr=&y;//error(change of address is not allowed)
	printf("%d\n",*ptr);
}
int main()
{
	constant_ptr();
	ptr_to_constant();
	constant_pointer_to_constant();
	return 0;
}
