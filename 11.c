
/*
 WRITE A C CODE TO PRINT PRIME NUMBERS IN BETWEEN 1-100 USING BREAK AND CONTINUE
 */

#include <math.h>
#include <stdio.h>

void main()

{
  int i, j;
  i = 2;
  while ( i < 100 )
{
     j = 2;
  while ( j < sqrt(i) )
     {
         if ( i % j == 0 )
            break;

         else
         {
            ++j;
            continue;
         }
      }

      if ( j > sqrt(i) )

            printf("%d\t", i);

      ++i;
  }

  getch();

}


