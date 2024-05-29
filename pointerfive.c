#include<stdio.h>
int main()
{
	int ivar=10,*iptr=&ivar;
	if(iptr && *iptr)
	{
		printf("%d\n",*iptr);
	}
	
	
		printf("outofif\n");

}

