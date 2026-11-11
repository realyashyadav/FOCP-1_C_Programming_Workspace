#include<stdio.h>
int main()
{
    int a,b;
char choice;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
printf("\n choose + - * / %%");
scanf(" %c", &choice);
switch(choice)

    {
    case '+':
    printf("\nSum=%d",a+b);
    break;
    case '-':
    printf("\n diff=%d",a-b);
    break;
    case '*':
    printf("\nproduct=%d",a*b);
    break;
    case '%':
    printf("\nRemainder=%d",a%b);
    break;
    case '/':
    printf("\n remainder=%d",a%b);
    break;
    default:
    printf("invalid choice");
}
return 0;
}