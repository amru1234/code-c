#include<stdio.h>
void main()
{
int marks;
printf("how many marks in marathi:");
scanf("%d",&marks);
if(marks>=90){
    if(marks<=100){
       printf("\"Grade -X\" based on marks:%d\n",marks);
   }
 }
  if(marks>=75){
      if(marks<=89){
           printf("\"Grade -A\" based on marks:%d\n",marks);
  }
 }
  if(marks>=60){
      if(marks<=74){
    printf("\"Grade -B\" based on marks:%d\n",marks);
    }
  }
    if(marks>=45){
        if(marks<=54){
         printf("\"Grade -C\" based on marks:%d\n",marks);
    }
  }
 else{
      printf("\"Fail\" based on marks:%d\n",marks);
}
 }



