// pgm to swap two no.s using third variable

#include<stdio.h>
int main()
{
    int a,b, temp;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("\n before swapping a=%d,b=%d",a,b);

    temp=a;
    a=b;
    b=temp;
    printf("\n after swapping a=%d,b=%d\n",a,b);
}