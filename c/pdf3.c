#include<stdio.h>
int main()
{ 
  int a,b; 
  printf("enter number: ");
  scanf("%d",&a);
  printf("enter number: ");
  scanf("%d",&b);
  printf("before swapping value of a variable a and b:\n%d\n%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("after swapping value of a variable a and b:\n%d\n%d\n",a,b);
  }
