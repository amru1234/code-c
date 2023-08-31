#include<stdio.h>
void main()
{
int n;
printf("Enter any Number:");
scanf("%d",&n);
if(n==1||n==3||n==5||n==7||n==8||n==10||n==12){
    printf("31 days in that month:%d\n",n);
  }
  else{
 if(n==4||n==6||n==9||n==11){
    printf("30 days in that month:%d\n",n);
  }
  else
  {
  if(n==2){
    printf("28 or 29 days in that month:%d\n",n);
    }
   else{
        printf("invalid number of a months:%d\n",n);
 }
}
}
}
