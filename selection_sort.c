#include <stdio.h>

int main()

{

     int i, j, num, arr[250], pos, temp;

 

     printf("Enter number of elements\n");

     scanf("%d", &num);

 

     printf("Enter %d integers\n", num);

 

     for ( i = 0 ; i < num ; i++ )

          scanf("%d", &arr[i]);

 

     for ( i = 0 ; i < ( num - 1 ) ; i++ )

     {

          pos = i;

 

           for ( j = i + 1 ; j < num ; j++ )

           {

                  if ( arr[pos] > arr[j] )

                  pos = j;

           }

           if ( pos != i )

           {

                 temp = arr[i];

                 arr[i] = arr[pos];

                 arr[pos] = temp;

           }

     }

 

     printf("Selection sorting in ascending order:\n");

 

     for ( i = 0 ; i < num ; i++ )

          printf("%d\n", arr[i]);

 

     return 0;

}