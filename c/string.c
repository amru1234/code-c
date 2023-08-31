/*
#include<stdio.h>
void main()
{
int n,i=1;
printf("Enter any number\n:");
scanf("%d",&n);
while(i<=n*2){
     printf("%d\n",i);
     i=i+2;
    }
 
}


#include<stdio.h>
int main()
{
char orig[4][4],trapos[4][4];
int i,j,k,n,ch;
printf("*Transpose of any matrix array*\n");
printf("Enter number of elements in the array:");
scanf("%d",&n);
printf("Enter the elements:");
for(k=0;k<n;k++){
      for(i=0;i<n;i++){
            scanf("%hhd",&orig[k][i]);
            trapos[j][i]=orig[i][j];
            
      }
   }
     for(k=0;k<n;k++){
        printf("orignal and transporse matrix:%d %d\n",orig[i][j],trapos[i][i]);
        
    } 
}       


#include<stdio.h>
#include<string.h>
int main()
{
 char ary[40];
 fgets(ary, sizeof(ary), stdin);
 printf("%s", ary);
}

*/

#include <stdio.h>
#include<string.h>
int main()
{
   char str[100];
   printf("Enter Input:\n");
   scanf("%s",str);
   int len = strlen(str);
   int i;
   printf("Output:\n");
   for(i=len-1; i>=0; i--)
   {
       if(str[i]>='a' && str[i]<='z')
       {
             printf("%c",str[i]);
       }
       else
       {
          break;
       }
   }
   printf("\n");
   return 0;
}


#include<stdio.h>
int main()
{
    int N;
    printf("Enter size of the array:\n");
    scanf("%d",&N);
    int arr[N];
    printf("Enter Elements of an array:\n");
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Output:");
    for(int i=N-1; i>=0; i--)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}


#include <stdio.h>

int main()
{
    int N,R,sum=0;
    printf("Enter any Input:");
    scanf("%d",&N);
    for(N; N>0; N=N/10){
         R=N%10;
         sum=sum*10+R;
    }
    printf("output:%d",sum);
    return 0;
}

