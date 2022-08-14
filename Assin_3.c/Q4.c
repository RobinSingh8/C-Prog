//Write a C program to calculate area of an equilateral triangle.

#include<stdio.h>
int main()
{
  float side , area;
	printf("enter the value");
	scanf("%f",&side);
	area=(sqrt(3)/4)*side*side;
	printf("area of equilateral triangle:%.2f",area);
	
}
