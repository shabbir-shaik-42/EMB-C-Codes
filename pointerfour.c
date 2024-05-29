#include<stdio.h>
int main()
{
	int arr[]={10,20,30,40,50,60,70};
	int *iptr=arr+7;
	printf("%d\n",*(iptr-5));
}

