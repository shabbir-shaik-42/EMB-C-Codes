#include<stdio.h>
#include<math.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int divi(int, int);
int mod(int, int);
int power(int, int);
int greatestFactor(int, int);


int add(int x, int y)
{
       int sum= x+y;
       return sum;
}

int sub( int x, int y)
{
       int sub=x-y;
       return sub;
}

int mul (int x, int y)
{
       int mul = x*y;
       return mul;
}
int divi (int x, int y)
{
       int divi=x/y;
       return divi;
}
int mod( int x, int y)
{
       int mod= x%y;
       return mod;
}
int power(int x, int y)
{
       int power= pow(x,y);
       return power;
}
int greatestFactor(int x, int y)
{
       int gcf;
       for (int i=1; i<=x && i<=y; ++i)
       {
               if(x%i==0 && y%i==0)
               {
                       gcf=i;
               }
       }
       return gcf;

}

int main()
{
       int a, b;
       printf("Enter the two numbers:");
       scanf("%d%d",&a, &b);
       int res1, res2, res3, res4, res5, res6, res7;
       res1= add(a,b);
       res2= sub(a,b);
       res3= mul(a,b);
       res4= divi(a,b);
       res5= mod(a,b);
       res6= power(a,b);
       res7= greatestFactor(a,b);

       printf("Add:%d\n", res1);
       printf("Sub:%d\n", res2);
       printf("Mul:%d\n", res3);
       printf("Div:%d\n", res4);
       printf("Mod:%d\n", res5);
       printf("Pow:%d\n", res6);
       printf("Gcf:%d\n", res7);
}
