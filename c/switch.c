#include<stdio.h>
void main()
{
int a,b,Add,Sub,Mul,Div,Mod,n;
printf("Enter Any Number:");
scanf("%d",&a);
printf("Enter Any Number:");
scanf("%d",&b);
printf("Enter Any Number:");
scanf("%d",&n);
switch(n)
{
case 1: 
     Add=a+b;
     printf("the addition of two numbers:%d\n",Add);
break;
case 2: 
    Sub=a-b;
    printf("the substraction  of two numbers:%d\n",Sub);
break;
case 3: 
    Mul=a*b;
    printf("the multiplication of two numbers:%d\n",Mul);
break;
case 4: 
    Div=a/b;
    printf("the division of two numbers:%d\n",Div);
break;
case 5: 
    Mod=a%b;
    printf("the modulus of two numbers:%d\n",Mod);
break;
default:
    printf("Invalid Number\n");
}
}

