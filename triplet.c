#include<stdio.h>
void main()
{
  int a,b,c;
  a=3;
  b=4;
  c=5;
  int A,B,C;
  A=(a*a);
  B=(b*b);
  C=(c*c);
  if ((A+B)==C)
  {
    printf("The given numbers are a pythagorean triplets");
  }
  else
  {
    printf("The given numbers are not a  pythagorean triplets");
  }
}
