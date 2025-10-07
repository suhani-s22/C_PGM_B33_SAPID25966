//factorial

#include<stdio.h>
void main()
{
    int n,fact=1,x;
    printf("enter value:");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        printf("\n %d",x);
        fact=fact*x;
        
    }
    printf("\n%d",fact);
    printf("\nfactorial=%d",fact);
}
