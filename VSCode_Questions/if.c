#include<stdio.h>
int main()
{
    int number;
    printf("enter the number:");
    scanf("%d", &number);
    if(number>=0)
    {
        printf("+ve number");
    }
    else
    {
        printf("number is negative");
    }
        printf("\nlast statement");
    return 0;
}