#include<stdio.h>
int main()
{
	int ivar=10;
	int *ivarone=&ivar;
	printf("%d\n",**&ivarone);
}

