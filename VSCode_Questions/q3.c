#include<stdio.h>
int main ()
{int price;int quantity;
    printf("\n Enter price and quantity:");
    scanf("%d%d", &price,&quantity);

    printf("total bill=%d",price*quantity);
    return 0;

}