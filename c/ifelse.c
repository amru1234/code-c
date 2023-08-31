#include<stdio.h>
void main()
{
int n,rem,sum=0;
printf("Enter any Number:");
scanf("%d",&n);
while(n>0){
    rem=n%10;
    sum=sum+rem;
    n=n/10;
 } 
 printf("the sum of all digits of a number:%d\n",sum);
 }
