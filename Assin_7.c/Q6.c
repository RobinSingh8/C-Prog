//Write a C program to print the following series
//1	4	9	16	25	……n



#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the range of number:");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d ", i * i);
        i++;
    }
}
