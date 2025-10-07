// code to swap 2 numbers without the use of third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
     printf("before swapping a=%d,b=%d",a,b);

     a=a+b;
     b=a-b;
     a=a-b;
     printf("\nafter swapping a=%d,b=%d",a,b);
}