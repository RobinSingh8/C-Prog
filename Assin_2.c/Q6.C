//Write a C program to perform the sum of two number without using plus operator

#include<stdio.h>
int main()
{
	int n1,n2,i;
	printf("enter a first number");
	scanf("%d",&n1);
	printf("enter a second number");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		n1++;
	}
	printf("sum of two number : %d",n1);
}
