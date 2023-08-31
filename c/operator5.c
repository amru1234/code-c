#include<stdio.h>
void main()
{
int i,n,c=0;
printf("Enter any Number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
     }
 if(c==2){
    printf("entered number is prime number: %d\n",n);
  }
  else
    printf("entered number is not prime number: %d\n",n); 
 }

