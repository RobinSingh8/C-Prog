//Write a C program to print the following series
//2	4 	6 	8 	10 

#include<stdio.h>
int main()
{
int i = 2, number;
printf("\n Please Enter the Maximum Limit Value : ");
scanf("%d", &number);
while(i <= number)
{
printf(" %d\t", i);
i = i+2;
}
return 0;
}
