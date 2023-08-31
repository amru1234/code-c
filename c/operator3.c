#include<stdio.h>
void main()
{
int a,b,c,sum,avg;
printf("how many marks in marathi:");
scanf("%d",&a);
printf("how many marks in hindi:");
scanf("%d",&b);
printf("how many marks in english:");
scanf("%d",&c);
sum=a+b+c;
avg=sum/3;
printf("%d\n",avg);
if(avg>=80){
    printf("\"Grade -A\" based on avg:%d\n",avg);
  }
 else{
 if(avg>=60){
    printf("\"Grade -B\" based on avg:%d\n",avg);
  }
  else{
  if(avg>=40){
    printf("\"Grade -C\" based on avg:%d\n",avg);
    }
   else{
      printf("\"Fail\" based on avg:%d\n",avg);
 }
 }
}
}

