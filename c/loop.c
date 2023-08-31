/*
#include<stdio.h>
int main()
{
int h,r;
printf("Enter any hour:");
scanf("%d",&h);
printf("Enter any rate:");
scanf("%d",&r);
printf("Daily wages of a worker:%d\n",r*h);
}
*/

#include<stdio.h>
int main()
{
char ary[20];
int i,j,k,n,temp;
printf("*Sorting elements of an array*\n");
printf("Enter number of elements in the array:");
scanf("%d",&n);
printf("Enter the elements:");
for(k=0;k<n;k++){
        scanf("%hhd",&ary[k]);
      }
      for(i=0;i<n;i++){
              for(j=i+1;j<n;j++){
                if(ary[i]>ary[j]){
                     temp=ary[i];
                     ary[i]=ary[j];
                     ary[j]=temp;
                     
                }
                
           } 
       }        
            printf("*Ascending order of an elements in an array\n*");    
            for(k=0;k<n;k++){
                printf("*%d*\n",ary[k]);
      } 
           printf("Size of an array:%ld\n",sizeof(ary));       
}  
