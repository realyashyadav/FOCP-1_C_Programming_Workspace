#include<stdio.h>
int main()
{
    int number1,number2,number3;
    printf("enter the three numbers:");
    scanf("%d%d%d", &number1,&number2,&number3);
    float avg = (number1+number2+number3)/3;
    printf("the average of the given three numbers is:%.2f",avg);
    return 0;
}