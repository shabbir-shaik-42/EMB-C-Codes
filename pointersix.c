
#include<stdio.h>
int main()
{
	int arr[]={10,20,30,40,50,60,70};
	int *iptr=arr+3;
	printf("arr[0]--->%d\n",arr[0]);
	printf("ptr[-3]--->%d\n",iptr[-3]);
	 printf("*(arr+3)--->%d arr[3]--->%d\n",*(arr+3),arr[3]);

}

