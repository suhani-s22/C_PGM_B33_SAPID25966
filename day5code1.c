// program to calculate simple and compound interest for given principal, rate, and time

#include<stdio.h>
int main()
{
    int SI,CI,P,T,R;
    printf("enter P,T,R");
    scanf("%d %d %d",&P,&T,&R);
    SI=(P*T*R)/100;
    printf("\nSI=%d",SI);
    CI=P*(1+R/100)-P;
    printf("\nCI=%d",CI);
}