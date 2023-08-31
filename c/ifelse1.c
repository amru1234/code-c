#include<stdio.h>
void main()
{
int n,sum=0,i=1;
printf("Enter any Number:");
scanf("%d",&n);
while(i<=n){
 if(n%i==0){
   sum=sum+i;
   i++;
 }
  i++;
}
if(sum==n){
   printf("Entered number is perfect number:%d\n",n);
  }else{
  printf("Entered number is perfect number:%d\n",n);
 }
}

