#include<stdio.h>
int main()
{
    int n,n1,i,fact,j;
    printf("Enter the Number");
    scanf("%d",&n);
    printf("Enter the Number");
    scanf("%d",&n1);
    printf("Prime Numbers are: \n");
    for(i=n; i<=n1; i++)
    {
        fact=0;
        for(j=2; j<=n1; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==1)
            printf("%d " ,i);
    }
return 0;
}
