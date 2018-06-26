#include <stdio.h>

int main(void) {
  int n,i;
  printf("enter the number");
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
    if(n%i==0)
      printf("it is not a prime number");
    else
      printf("it is a primt number");
      return 0;                               //if it is a prime number it will come out of loop or it will print many times
  }

  return 0;
}
