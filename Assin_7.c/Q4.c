//Write a C program to find all factors of a number

#include <stdio.h> 
int main()
{
  int i, N; 
   
  printf("\n Please Enter any number to Find Factors \n");
  scanf("%d", &N);
 
  printf("\n Factors of the Given Number are:\n");
  for (i = 1; i <= N; i++)
   {
     if(N%i == 0)
        {
		 printf(" %d  ", i);
		}
   }
 
  return 0;
}
