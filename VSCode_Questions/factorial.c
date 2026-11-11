#include <stdio.h>
int main()
{
int i;
printf("enter number=  ");
scanf("%d",&i);
int j=1;
while (i>=1)
{
j=j*i;
i--;
}
printf("factorial is = %d",j);
    return 0;
}