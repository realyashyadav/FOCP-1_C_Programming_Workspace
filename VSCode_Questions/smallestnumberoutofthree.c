#include<stdio.h>
int main()
{
int no1,no2,no3;
printf("enter the three numbers:");
scanf("%d%d%d", &no1, &no2, &no3);
if(no1<no2)
    {
    if(no1<no3)
    printf("%d",no1);   
    else
    printf("%d",no3);
}

else
    {
    if(no2<no3)
    printf("%d",no2);
    else
    printf("%d",no3);
    }
return 0;

}

