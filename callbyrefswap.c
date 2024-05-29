#include<stdio.h>
int swap(int *,int *);
int main()
{
       int num1,num2,temp;
       printf("Enter two numbers:");
       scanf("%d%d",&num1,&num2);
       printf("\nBefore Swapping: num1:%d , num2: %d",num1,num2);
       swap(&num1,&num2);
         printf("\nAfter Swapping: num1:%d , num2: %d\n",num1,num2);
}
int swap(int *a,int *b)
{
       int temp;
       temp=*a;
       *a=*b;
       *b=temp;
       return *a,*b;
}

