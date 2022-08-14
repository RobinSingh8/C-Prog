//C program to print square of given number

#include<stdio.h>
 
int main()
{
  int number, Square;
 
  printf(" \n Please Enter any integer Value : ");
  scanf("%d", &number);
  
  Square = number * number;
  
  printf("\n Square of a given number %d is  =  %d", number, Square);
 
  return 0;
}
