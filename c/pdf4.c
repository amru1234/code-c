#include<stdio.h>
int main()
{ 
  int a,b,c; 
  printf("enter number: ");
  scanf("%d",&a);
  printf("enter number: ");
  scanf("%d",&b);
  printf("before swapping value of a variable a and b:\n%d\n%d\n",a,b);
  c=a;
  a=b;
  b=c;
  printf("after swapping value of a variable a and b:\n%d\n%d\n",a,b);
  }
