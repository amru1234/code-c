/*
#include<stdio.h>
int main()
{
int lower;
for(lower=1;lower<=100;lower=lower+1){
       printf("%d\n",lower);
   }
}


#include<stdio.h>
int main()
{
   int i,c=0,n;
   printf("Enter a Input:");
   scanf("%d",&n);
   for(i=1; i<=n; i++)
   {
      if(n%i==0)
      {
        c=c+1;
      }
        i++;
   }
   if(c==2)
   {
      printf("Yes\n");
   }
   else
   {
      printf("No\n");
   }
  return 0;
}
*/


#include<stdio.h>
int main()
{
    int N;
    scanf("%d\n",&N);
    int arr[N];
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

