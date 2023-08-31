#include<stdio.h>
void main()
{
int n;
printf("Enter any number:");
scanf("%d",&n);
if(n>0){
    printf("is Positive number:%d\n",n);
  }
  else{
 if(n<0){
    printf("is Negative number:%d\n",n);
  }
   else{
        printf("a number is equal to 0:%d\n",n);
 }
}
}
