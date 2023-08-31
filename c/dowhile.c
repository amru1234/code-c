#include<stdio.h>
void main()
{
int n,cube;
char ch;
do{
printf("Enter a number:\n");
scanf("%d",&n);
cube=n*n*n;
printf("cube is %d\n",cube);
printf("Do you want to continue?(y/n):\n");
scanf("%s",&ch);
}
while(ch=='y');
}
