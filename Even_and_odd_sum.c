#include <stdio.h>

int main()
{
 int i, n, evesum =0, oddsum =0;
  printf("enter a number:");
  scanf("%d",&n);
  
  for (i =1 ; i<= n ; i++)
  {
      if(i%2 ==0)
      evesum = evesum+i;
      else 
      oddsum = oddsum+i;
  }
  printf("evesum = %d\n" , evesum);
  printf("oddsum = %d\n", oddsum);

    return 0;
}
