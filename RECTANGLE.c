#include<stdio.h>
int main()
{
    int height = 5;
    int width = 5;
    int i, j;
    for (i = 0; i <= height; i++)
    {
        for (j = 0; j <= width; j++)
        if(i==0||i==height||j==0||j==width)
        
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}