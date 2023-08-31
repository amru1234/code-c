#include<stdio.h>
void main()
{
int n,rem,num1,rev=0;
printf("Enter any Number:");
scanf("%d",&n);
num1=n;
while(n>0){
   rem=n%10;
   rev=rev*10+rem;
   n=n/10;
}
if(num1==rev)
   printf("Entered number is palindrome number:%d\n",num1);
  else
  printf("Entered number is not a palindrome number:%d\n",num1);
 
}
