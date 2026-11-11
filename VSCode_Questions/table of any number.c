#include<stdio.h>
int main(){
int n;
int i,j;
printf("enter the number to get it's table:");
scanf("%d",&n);
for(i=1;i<=10;i++){
    j=n*i;
    printf("%d x %d=%d\n",n,i,j);
}
return 0;
}