#include <stdio.h>

int main()
{
   int f1=0, f2=1, fib_ser, c=2, lmt;
 
   printf("Please enter the limit of the Fibonacci series :");

   scanf("%d",&lmt);

   printf("\nFibonacci series is: \n%d \n%d \n",f1,f2);
 
   while (c < lmt)

   {
      fib_ser=f1+f2;
      c++;
      printf("%d\n",fib_ser);
      f1=f2;
      f2=fib_ser;
   }
    return 0;
}