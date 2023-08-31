#include<stdio.h>
int main()
{
int n;
printf("Enter a number:\n");
scanf("%d",&n);
if(n%2==0){
   goto even;
  }
    goto odd;
even:
 printf(" number is even:\n");
 return 0;
odd: 
 printf(" nuber is odd:\n");
 return 0;
}
