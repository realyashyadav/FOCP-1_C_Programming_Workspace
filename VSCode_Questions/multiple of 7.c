#include<stdio.h>
int main(){
int a;
do{
    printf("enter any number :");
    scanf("%d", &a);
    printf("%d\n",a);
    if(a%7==0)
        break;
}

while(1);
printf("\nyou entered a multiple of 7\n");
return 0;
}
