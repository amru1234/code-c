#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("Enter any Number:");
scanf("%d",&n);
while(i<=n){
  if(i%2==0){
   sum=sum+i;
   i++;
  }
  else
  i++;
 }
  printf("%dThe sum of all even number\n",sum);
}



