#include<stdio.h>
int main(){
int i,n;
int sum=0;
printf("enter the number n:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    sum=sum+i;
}
printf("\nthe sum of first %d natural numbers is:%d\n",n,sum);
return 0;
}
