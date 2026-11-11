#include<stdio.h>
int main(){
int sum=0;
int i=1;
int n;
printf("\n enter the number:");
scanf("%d",&n);
while(i<=n){
    sum=sum+i;
    i=i+1;
}
printf("\n sum of series=%d",sum);
    return 0;
}