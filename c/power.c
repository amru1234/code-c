#include<stdio.h>
#include<math.h>
void main()
{
int p,i;
double n,T;
printf("Amount of money:");
scanf("%d",&p);
printf("no of years:");
scanf("%lf",&n);
printf("rate of interest:");
scanf("%d",&i);
T=pow((p*(1+(i/100))),n);
printf("so we determined value of T: %lf\n",T);
}
