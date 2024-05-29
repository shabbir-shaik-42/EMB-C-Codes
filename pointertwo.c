#include<stdio.h>
int main()
{
	int ivar=10;
	int *iptr=&ivar;
	printf("ivar:%d\n",ivar);
	printf("iptr:%p\n",iptr);
	 printf("%d\n",**&iptr);

}

