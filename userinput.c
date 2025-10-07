//user input for name and age

#include<stdio.h>
int main()
{
    char name[100];
    int age;
    printf("Enter name:");
    scanf("%s",&name);
    printf("Enter age:");
    scanf("%d",&age);
    printf("Your name is %s and your age is %d", name, age);
}