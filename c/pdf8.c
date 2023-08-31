#include<stdio.h>
int main()
{
int n,i;
printf("Enter a number:\n");
scanf("%d",&n);
i=1;
while(i<=n){
   if(i==n/2)
      break;
    else
    printf("%d\n",i);
    i++;
 }
}
