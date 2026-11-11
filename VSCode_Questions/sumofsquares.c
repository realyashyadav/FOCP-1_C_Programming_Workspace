#include<stdio.h>
int SumSeries(int a)
{
    int Sum=0;int i=1;
for(;i<=a;i++)
{
Sum=Sum+(i*i);
}
return Sum;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",SumSeries(a));
    return 0;
}
