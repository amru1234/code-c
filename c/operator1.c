#include<stdio.h>
void main()
{
int n;
printf("Enter any Number:");
scanf("%d",&n);
if(n>99 && n<=999)
    printf("entered number is 3 digits number: %d\n",n);
  else
    printf("entered number is not  3 digits number: %d\n",n);
 
 }
