#include<stdio.h>
int main()
{
int no1,no2;
char choice;
printf("enter two numbers:");
scanf("%d%d",&no1,&no2);
printf("\n choose + - * / %%");
scanf(" %c",&choice);
if (choice=='+')
    printf("\n sum=%d",no1+no2);
else if (choice=='-')
    printf("\n difference=%d",no1-no2);
else if (choice=='*')
    printf("\n multiplication=%d",no1*no2);
else if (choice=='/')
    printf("\n division=%d",no1/no2);
else if (choice=='%')
    printf("\n remainder=%d",no1%no2);
else
    printf("choice is wrong");
    return 0;




}

