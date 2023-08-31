#include<stdio.h>
int main()
{
int h,l,s;
float c;
printf("Enter any Number:");
scanf("%d",&h);
printf("Enter any Number:");
scanf("%f",&c);
printf("Enter any Number:");
scanf("%d",&s);
while(c<=h){
   l=9/5*c+32;
   printf("%0.6f\t%3d\n",c,l);
   c=c+s;
 }
}



