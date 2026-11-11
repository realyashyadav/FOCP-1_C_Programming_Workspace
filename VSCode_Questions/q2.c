#include<stdio.h>
int main()
{
    int age;float Height;char grade;
    printf("\n Enter Age,Height and grade: ");
    scanf("%d%f%c", &age,&Height,&grade);
    printf("\n age=%d Height=%f grade=%c",age,Height,grade);
    return 0;
    
}