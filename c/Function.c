/*
#include<stdio.h>
void greater(int,int);
int main()
{
  int x=4,y=5;
  greater(x,y);
  return 0;
}
void greater(int a,int b)
{
  if(a>b)
  {
     printf("%d is greater number\n",a);
  }
  else
  {
  printf("%d is greater number\n",b);
  }
}


#include<stdio.h>
void fun(int);
int main()
{
  int num=10;
  fun(num);
  printf("value after function call: %d\n",num);
}
void fun(int num)
{
  num=num+10;
  printf("value inside function: %d\n",num);
}

#include<stdio.h>
void fun(int*);
int main()
{
  int num=10;
  fun(&num);
  printf("value after function call: %d\n",num);
  return 0;
}
void fun(int *p)
{
  *p=*p+10;
  printf("value inside function: %d\n",*p);
}

#include<stdio.h>
void message(void);
int main()
{
  printf("Before Function call\n");
  message();
  printf("\nAfter Function call\n");
  return 0;
}
void message(void)
{
  printf("\nFunction with no return type and no arguments\n");
}


#include<stdio.h>
void cube(int a);
int main()
{
  int num = 5;
  printf("The number is: %d",num);
  cube(num);
  return 0;
}
void cube(int a)
{
  printf("\nCube of the number is: %d\n",a*a*a);
}


#include<stdio.h>
int square();
int main()
{
  int result = square();
  printf("The Square is: %d\n",result);
  return 0;
}
int square()
{
  int s,num;
  printf("Enter a Number:");
  scanf("%d",&num);
  s=num*num;
  return s;
}

#include<stdio.h>
#include<math.h>
double pow(double,double);
int main()
{
  double x,y,z;
  printf("Enter value of x and y for the expression Z=(x^4)+(y^-3)+3:\n");
  scanf("%lf %lf",&x,&y);
  z=((pow(x,4))+(pow(y,-3))+3);
  printf("z = %lf\n",z);
  return 0;
}
double pow(double n,double p)
{
  double result=1;
  if(p>=0)
  {
     while(p--)
     {
         result*=n;
     }
  }
  else
  {
     while(p++)
     {
        result=result/n;
     }
  }
  return result;
}


#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main(void)
{
  int length,i;
  char string[20]="THIS IS A STRING.";
  length=strlen(string);
  for(i=0;i<length;i++)
  {
     if((string[i]>='A')&&(string[i]<='Z'))
     {
          string[i]=tolower(string[i]);
     }
  }
  printf("lower:%s",string);
  for(i=0;i<length;i++)
  {
     if((string[i]>='a') && (string[i]<='z'))
     {
        string[i]=toupper(string[i]);
     }
  }
  printf("\nupper:%s\n",string);
  return 0;
}

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
  long result; long x=-12345678L;
  int num=-1234;
  printf("%d is the absolute value of integer:%d\n",abs(num),num);
  result=labs(x);
  printf("%ld is the absolute value of long: %ld\n",result,x);
  double number=625.54;
  double down,up;
  down=floor(number);
  up=ceil(number);
  printf("original number: %5.2lf\n",number);
  printf("number rounded down: %5.2lf\n",down);
  printf("number rounded up: %5.2lf\n",up);
  printf("square root of th number %5.2lf is : %5.5lf\n",down,sqrt(down));
  return 0;
 }

//Invalid*
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
char source[25] = "wSpat ehS rtni g";
char target[25];


int main(void)
{
 swab(source,target,strlen(source));
 printf("This is target: %s\n",target);
 return 0;
}

#include<stdlib.h>
#include<stdio.h>
int main(void)
{
  int i;
  printf("five random numbers from 0 to 99 are:\n\n");
  for(i=0;i<5;i++)
  {
      printf("%d\n",rand() % 100);
  }
  return 0;
}


#include<string.h>
#include<stdio.h>
int main(void)
{
  char str1[25] = "Dennis";
  char str2[25] = "Ritchie";
  char str3[] = "";
  printf("\nFirst string:\t%s",str1);
  printf("\nSecond string:\t%s",str2);
  
  strcat(str1,str3);
  strcat(str1,str2);
  printf("\nfirst + second:\t%s\n",str1);
  return 0;
}


#include<string.h>
#include<stdio.h>
int main(void)
{
  char string[15];
  int pos;
  char ch = 'o';
  printf("Entera string:\t");
  scanf("%s",string);
  if(strchr(string,ch))
  {
      printf("The character %c is at position: %ld\n",ch,strchr(string,ch)-string +1);
  }
  else
  {
     printf("The character was not found\n");
     return 0;
  }
}

#include<string.h>
#include<stdio.h>
int main(void)
{
  char string[15];
  printf("Entera string:\t");
  scanf("%s",string);
  printf("The length of entered string is:%ld\n",strlen(string));
  return 0;
}


#include<string.h>
#include<stdio.h>
int main(void)
{
  char dest_string[]="Programming language";
  char src_string[]="C Programming";
  printf("Before copy\n");
  printf("Destination string:\t%s\nSource string :\t\t%s\n",dest_string,src_string);
  strcpy(dest_string,src_string);
  printf("\nAfter copy");
  printf("\nDestination string:\t%s\nSource string:\t\t%s\n",dest_string,src_string);
  return 0;
}


//Invalid
#include<string.h>
#include<stdio.h>
void copy(char s1[],char s2[],int 11, int 12);
int main(void)
{
  char org_string[20];
  char new_string[20];
  printf("Enter first String: \t");
  scanf("%s",org_string);
  printf("Entera second string: \t");
  scanf("%s",new_string);
  
  int 11 = strlen(org_string);
  int 12 = strlen(new_string);
  copy(org_string,new_string,11,12);
  return 0;
}
void copy(char s1[],char s2[],int 11,int 12)
{
  int i=0,j=0;
  if(11+12<20)
  {
     for(i;i<12;i++)
     {
         s1[i]=s2[i];
     }
     s1[i]='\0';
  }
  else
  {
     printf("string is too large can't be copied.");
  }
  printf("\nAfter copy\nFirst string: \t%s",s1);
  printf("\nSecond string:\t%s",s2);
}


#include<string.h>
#include<stdio.h>
int main(void)
{
  char string1[]="pens",string2[]="pen";
  int d;
  d=strcmp(string2,string1);
  if(d<0)
  {
  printf("%s is less than %s\n",string2,string1);
  }
  else if(d==0)
  {
  printf("%s and %s are equal\n",string1,string2);
  }
  else
  {
  printf("%s is greater than %s\n",string2,string1);
  }
  return 0;
}


//Invalid
#include<stdio.h>
#include<time.h>
int main(void)
{
  time_tt;
  char date[9];
  t=time(NULL);
  _strdate(date);
  printf("Current date and time is %s",ctime(&t));
  printf("\n todays date is %s",date);
  return 0;
}

//Function class
#include<stdio.h>
int fun(int i)
{
  i=i+1;
  printf("%d\n",i);
  return i+1;
}
int main()
{
 int i =10;
 i=fun(fun(i));
 printf("%d\n",i);
}

#include<stdio.h>
int fun(int i)
{
  i=i+1;
  printf("%d\n",i);
  return i+1;
}
int main()
{
 int i =10;
 i=fun(fun(++i));
 printf("%d\n",i);
}


#include<stdio.h>
#include<string.h>
float area(float);
int main(void)
{
  float r;
  printf("Enter radius of circle:");
  scanf("%f",&r);
  printf("Area of the circle is:%5.2f\n",area(r));
  return 0;
}
float area(float r)
{
return r*r*3.14;
}

#include<string.h>
#include<stdio.h>
void swap(int*,int*);
int main(void)
{
  int a,b;
  printf("Enter two integers:");
  scanf("%d %d",&a,&b);
  printf("\nBefore swapping\n a:%d\n b:%d\n",a,b);
  swap(&a,&b);
  printf("\nAfter swapping\n a:%d\n b:%d\n",a,b);
  return 0;
}
void swap(int *a,int *b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}

#include<stdio.h>
int reverse(int a);

int main(void)
{
  int num;
  printf("Enter an integers:\t");
  scanf("%d",&num);
  printf("reverese of entered number is: %d\n",reverse(num));
  return 0;
}
int reverse(int n)
{
  int rev=0;
  while(n!=0)
  {
     rev=rev*10+(n%10);
     n=n/10;
  }
  return rev;
}


#include<stdio.h>
void display(int a);
int a=50;
int main()
{ 
  int i=20;
  printf("In main() function \n a=%d\n i=%d",a,i);
  display(i);
  return 1;
}
void display(int j)
{
int k=35;
printf("\nIn display() function \n a=%d\n j=%d\n k=%d\n",a,j,k);
}

#include<stdio.h>
int fact(int);
int main()
{
   int n,f;
   printf("\nEnter any number:");
   scanf("%d",&n);
   f=fact(n);
   printf("Factorial value = %d\n",f);
   return 1;
}
int fact (int num)
{
  int f;
  if(num==1)
  {
     return(1);
  }
  else
  {
     f=num*fact(num-1);
  }
  return(f);
}

#include<stdio.h>
int fibbo(int);
int main()
{
  int n,i=0,c;
  printf("Enter value of n:");
  scanf("%d",&n);
  printf("\nFibonacci series\n");
  for(c=1;c<=n;c++)
  {
    printf("%d ",fibbo(i));
    i++;
  }
}
int fibbo(int n)
{
   if(n==0)
   {
      return 0;
   }
   else if(n==1);
   {
      return 1;
   }
   else
   {
      return(fibbo(n-1)+fibbo(n-2));
   }
}

*/



#include<string.h>
#include<stdio.h>

int main(void)
{
  char string1[] = "pens";
  char string2[] = "pen";
  int d;
  
  char* ptr1 = string1;
  char* ptr2 = string2;

  d = strcmp(ptr2, ptr1);

  if (d < 0)
  {
    printf("%s is less than %s\n", ptr2, ptr1);
  }
  else if (d == 0)
  {
    printf("%s and %s are equal\n", ptr1, ptr2);
  }
  else
  {
    printf("%s is greater than %s\n", ptr2, ptr1);
  }

  return 0;
}
