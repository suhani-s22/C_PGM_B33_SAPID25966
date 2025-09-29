//calc area and circumfrence of circle given its radius

#include<stdio.h>
int main()
{
    float area,circumfrence,r;
    printf("enter r:");
    scanf("%f",&r);
    area=3.14*r*r;
    circumfrence=2*3.14*r;
    printf("\narea of circle:%f",area);
    printf("\ncircumfrence:%f",circumfrence);

    
}