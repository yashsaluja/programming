#include<stdio.h>
#include<conio.h>
void main()

{
    int i,n,sum;
    sum=0;
    clrscr();
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    
    {
        if(i%2==0)
            sum=sum+i;
    }

    printf("Sum of all Even Integers is %d",sum);
    getch();
}