//find and display sum of first n natural numbers

#include<stdio.h>
int main()
{int n,i,sum=0;
printf("enter n:");
scanf("%d %d",&n);
 for(i=1;i<=n;i++)
{
    printf("sum of natural no.s=%d",sum);
    sum=sum+i;
}}