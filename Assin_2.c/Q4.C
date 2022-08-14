//program to read a 4 digit number from user and perform the sum of their digits.

#include<stdio.h>
int main()
{
  int sum=0,num,rem;
  printf("enter a four digit no.");
  scanf("%d",&num);
  while(num!=0)
  {
  	rem=num%10;
  	sum=sum+rem;
  	num=num/10;
  	
  }
  printf("\n sum of digit is :%d",sum);
}
