#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter Any Number:");
scanf("%d",&a);
printf("Enter Any Number:");
scanf("%d",&b);
printf("Enter Any Number:");
scanf("%d",&c);
if(a>b){
     if(a>c)
    printf("Maximum number is:%d\n",a);
  else
  printf("Maximum number is:%d\n",c);
if(b>c)
    printf("Maximum number is:%d\n",b);
  else
   printf("Maximum number is:%d\n",c);
}
}



