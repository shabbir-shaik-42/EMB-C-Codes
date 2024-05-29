#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	printf("Enter the number of elements in the array:");
	scanf("%d",&size);
	int *arr=malloc(size * sizeof(int));
	for(int cnt=0;cnt<size;++cnt)
		arr[cnt]=cnt+1;
	printf("Array:");
	for(int cnt=0;cnt<size;++cnt)
		printf("%d ",arr[cnt]);
	printf("\n");
free(arr);
}

