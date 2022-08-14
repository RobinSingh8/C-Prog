//program to read the marks of five subject of student and print their total marks, average marks and percentage.

#include<stdio.h>
int main()
{
  int p,c,m,b,h,total,avg;
  float per;
  printf("enter Physics subjects marks: ");
  scanf("%d",&p);
  printf("enter Chemistry subjects marks: ");
  scanf("%d",&c);
  printf("enter Math subjects marks:");
  scanf("%d",&m);
  printf("enter Biology subjects marks: ");
  scanf("%d",&b);
  printf("enter History subjects marks: ");
  scanf("%d",&h);
  total=p+c+m+b+h;
  avg=total/5;
  per=total/5.0;
  printf("total:%d\n",total);
  printf("avg:%d\n",avg);
  printf("percentage:%f\n",per);
 
}
