#include<stdio.h>
int main()
{
int h,l,s;
float c;
printf("Enter any Number:");
scanf("%d",&h);
printf("Enter any Number:");
scanf("%d",&l);
printf("Enter any Number:");
scanf("%d",&s);
while(l<=h){
   c=5.0*(l-32.0)/9.0;
   printf("%3d\t%0.0f\n",l,c);
   l=l+s;
 }
}



