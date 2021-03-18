#include<stdio.h>
void main()
{
  int a=5;
  int b=10;
  int temp;
  temp=a;
  a=b;
  b=temp;
  printf("the numbers in reverse order are %d and %d",a,b);
}
