#include <stdio.h>
void swap(float *ptr1, float  *ptr2);
 
void main()
{
    float m, n;
 
    printf("Enter the values of A and B \n");
    scanf("%f %f", &m, &n);
    printf("Before Swapping:A = %5.2ftB = %5.2f\n", m, n);
    swap(&m, &n);
    printf("After Swapping:A  = %5.2ftB = %5.2f\n", m, n);
}
void swap(float *ptr1, float *ptr2)
{
    float temp;
 
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}