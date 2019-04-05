#include <stdio.h> 
#include <stdlib.h> 


int main()
{
  int i;
  int r = 1000;
  
  for (i = 0; r <= 50000; i++, r+=100)
  {
    printf ("%d\n", r);
  }
  
  return(0);
}