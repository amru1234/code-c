#include<math.h>
#include<stdio.h>
int main()
{
int a,b,i,cn;
printf("Enter two number:\n");
scanf("%d\n%d",&a,&b);
i=a-1;
while(i>0){
   if(i%b==0)
         {
            printf("There is closeset number:%d\n",i);   
             break;
          }
     else{
         i--;
  }
 }
if(i==0){
   printf("There is no any one closeset number\n");
 }
 else{
        return 0;
 }
}

