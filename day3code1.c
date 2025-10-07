//program to convert temperature from celcius to fahrenheit.

#include<stdio.h>
int main()
{ float ctemp,ftemp;
printf("enter temp in celcius:");
scanf("%f",&ctemp);
ftemp=(ctemp*1.8)+32;
printf("\ntemperature in f:%f",ftemp);

}