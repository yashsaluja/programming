#include<stdio.h>
#include<conio.h>
#include<math.h>
 
void dec_oct(long int num) 
{
long int rem[50],i=0,length=0;
while(num>0)
 {
 rem[i]=num%8;
 num=num/8;
 i++;
 length++;
 }
printf("nOctal number : ");
     for(i=length-1;i>=0;i--)
             printf("%ld",rem[i]);
}
void main()
{
long int num;
clrscr();
 
 printf("Enter the decimal number : ");
 scanf("%ld",&num);
 
    dec_oct(num);   
 
 getch();
}