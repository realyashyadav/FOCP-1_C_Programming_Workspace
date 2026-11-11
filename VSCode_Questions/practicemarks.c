#include<stdio.h>
int main() {
int marks;
printf("enter marks:");
scanf("%d", &marks);
    if(marks>0 && marks<30)
        printf("\nyou got C grade\n");
    else if(marks>=30 && marks < 70)
        printf("\nyou got B grade\n");
    else if(marks>=70 && marks<90)
        printf("\n you got A grade");
    else if(marks>=90 && marks<=100)
        printf("you got A+ Grade, wohoo lol");
    else
        printf("invalid marks");
    return 0;
}