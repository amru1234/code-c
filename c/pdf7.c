#include<stdio.h>
int main()
{
  int age; 
  printf("enter age of a person: ");
  scanf("%d",&age);
  if(age>=18 && age<=65)
    printf("A person is eligible for vote and also a person is senior citizen:%d\n",age);
  else
    printf("A person is not eligible for vote and also a person is not senior citizen:%d\n",age);
 
  }

