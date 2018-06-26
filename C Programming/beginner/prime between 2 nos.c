#include <stdio.h>

int main(void) {
  int n,i,n1,j;
  printf("enter the start number");
  scanf("%d",&n);
  printf("enter the ending number");
  scanf("%d",&n1);
  for(i=n;i<=n1;i++)
  {
    for(j=2;j<n;j++)
    {
    if(i%j==0)
      continue;
      
    else
    {
      printf("%d",i);
      return 0;
  }
    }
  }
  return 0;
}
