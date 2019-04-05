#include <stdio.h> 
#include <stdlib.h> 


int main()
{
  int i;
  int r = 18;
  
  for (i = 0; r <= 120; i++, r++)
  {
    printf ("%d\n", r);
    if (r>50) 
      r+=2;
    if (r>70)
      r+=3;
    if (r>100)
      r+=3; 
  }
  
  return(0);
}