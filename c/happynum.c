/*
#include<stdio.h>
#include<math.h>
int main()
{
 int i,j,num,temp,sum=0;
 printf("Enter number\n");
 scanf("%d",&num);
  while(sum!=1 && sum!=4)
  {
   sum=0;
   while(num>0)
  {
    j=num%10;
    sum+=(j*j);
    num=num/10; 
  }
  num=sum;
  }
  
  if(sum==1)
 printf("Happy Number\n");
 else
 printf("UnHappy Number\n");
}
*/

#include<stdio.h>
int main()
{
int num;
printf("Enter the number:");
scanf("%d",&num);
int one_c=0;
while(num!=0){
if(num%2==1)       
{  
   one_c++;
 }
      num/=2;
 }
 if(one_c%2==0)
   printf("It is an Evil Number\n");
 else
    printf("It is not an Evil Number\n");
}


/*

int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
 
int main(void)
{
    int number, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    int i = n;
    while (i != 0)
    {
        sum = sum + factorial(i % 10);
        i = i / 10;
    }
    if (sum == n)
    {
        printf("%d is strong number", number);
    }
    else
    {
        printf("%d is not a strong number", number);
    }
 }
 */ 
