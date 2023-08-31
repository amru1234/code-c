#include<stdio.h>
void main()
{
int i,n;
printf("Enter any Number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
        if(n%i==0){
             printf("%d\n",i);
        }
     }
}


