//code to calculate area and perimeter of rectangle 

#include<stdio.h>
int main()
{
    int l,b;
    printf("enter l:");
    scanf("%d",&l);
    printf("enter b:");
    scanf("%d",&b);
printf("\narea of rectangle:%d",b*l);
printf("\nperimeter of rectangle:%d",(2*b)+(2*l));
}