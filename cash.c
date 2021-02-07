#include <stdio.h>
#include <math.h>
#include <cs50.h>


int main (void)
{
   int cent;
   float n;

  do
  {
      n = get_float("cash owed:  ");
  }

    while (n < 0 );

//n = n * 100;
//n = round(n);

  n = round(n * 100);


   while(n > 0)

{
    if(n > 25)
    {
        n = n - 25;
        cent = cent + 1;
    }
    else if(n > 10)
    {
        n = n - 10;
        cent = cent + 1;
    }
    else if(n > 5)
    {
        n = n - 5;
        cent = cent + 1;
    }
    else
    {
        n = n - 1;
        cent = cent + 1;
    }
}

    printf("coins used: %d\n", cent);
}
