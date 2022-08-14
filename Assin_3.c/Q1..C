#include<stdio.h>
int main()
{
	int x1,w1,w2,x2,avg;
	printf("enter the value weight1");
	scanf("%d",&w1);
	printf("enter the item1");
	scanf("%d",&x1);
	printf("enter the value weight2");
	scanf("%d",&w2);
	printf("enter the item2");
	scanf("%d",&x2);
	avg=((w1*x1)+(w2*x2))/(x1+x2);
	printf("avg value is %d",avg);
}
