//Problem statement: Given n, print a left-aligned triangle. Row i must contain exactly i asterisks, for i from 1 to n.
//Input format: One integer n (1 ≤ n ≤ 20).
//Output format: Print n lines. Line i contains i asterisks.

#include <stdio.h>
int main() {
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for (int i = 0; i<=n; i++) {
        for (int j = 0;j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
