#include<math.h>
#include<stdio.h>
void main()
{
double T,l,g;
printf("Time period of simple pendulum:");
scanf("%lf\n",&T);
printf("Effective length of the simple pendulum:");
scanf("%lf\n",&l);
g=2*3.14*sqrt(l/T);
printf("acceleration due to gravity is:%lf\n",g);
}
