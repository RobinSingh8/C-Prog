//C program to enter two numbers and find their Addition, Subtraction

#include<stdio.h>
int main()  
{  
    int num1, num2,sum, sub;  
  
    printf("Input any two numbers separated by comma: ");  
    scanf("%d,%d", &num1, &num2);  
  
    sum = num1 + num2;  
    sub = num1 - num2;  
   
    printf("The sum of the given numbers : %d\n", sum);  
    printf("The difference of the given numbers : %d\n", sub);
  
    return 0;   
} 
 
