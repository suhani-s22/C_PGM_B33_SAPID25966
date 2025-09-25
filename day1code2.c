//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main()
{
    int a,b,sum,diff,product,div;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    diff=a-b;
    printf("diff=%d\n",diff);
    product=a*b;
    printf("product=%d\n",product);
    div=a/b;
    printf("div=%d\n",div);
}