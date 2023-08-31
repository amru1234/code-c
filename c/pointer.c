/*
#include<stdio.h>
#include<string.h>
int main(){
char name [3][10];
int price[3];
int pages[3],i;
for(i=0;i<=2;i++){
  printf("Enter details for book%d\n",i+1);
  printf("Enter name:");
  scanf("%s",name[i]);
  printf("Enter no.of pages:");
  scanf("%d",&pages[i]);
  printf("Enter price:");
  scanf("%d",&price[i]);
}
printf("*Book Details*\n\n\n");
printf("Name Pages Price\n");
for(i=0; i<3; i++){
    printf("%d.\nName: %s\nPrice: %d\npages: %d\n",i+1,name[i],price[i],pages[i]);
}
}


#include<stdio.h>
#include<string.h>
int main(){
struct book{
char name[3][10];
int price;
int pages;
};
struct book b1,b2,b3;

printf("Enter name, price & no of pages 1:\n");
scanf("%s %d %d\n",b1.name[0],&b1.price,&b1.pages);
printf("Enter name, price & no of pages 2:\n");
scanf("%s %d %d\n",b2.name[1],&b2.price,&b2.pages);
printf("Enter name, price & no of pages 3:\n");
scanf("%s %d %d\n",b3.name[2],&b3.price,&b3.pages);

printf("%d.\nName: %s\nPrice: %d\npages: %d\n",1,name[0],price[0],pages[0]);
printf("%d.\nName: %s\nPrice: %d\npages: %d\n",2,name[1],price[1],pages[1]);
printf("%d.\nName: %s\nPrice: %d\npages: %d\n",3,name[2],price[2],pages[2]);
}


#include<stdio.h>
#include<string.h>
int main()
{
  int i;
  struct employee
  {
       char name[10];
       char street[20];
       char city[20];
  };
  struct employee e1,e2,e3;

  printf("Enter name, price & no of pages 1:\n");
  scanf("%s %s %s\n",e1.name[0],e1.street,e1.city);
  printf("Enter name, price & no of pages 2:\n");
  scanf("%s %s %s\n",e2.name[1],e2.street,e2.city);
  printf("Enter name, price & no of pages 3:\n");
  scanf("%s %s %s\n",e3.name[2],e3.street,e3.city);

  printf("%d.\nName: %s\nstreet: %s\ncity: %s\n",1,name[0],street[0],city[0]);
  printf("%d.\nName: %s\nstreet: %s\ncity: %s\n",2,name[1],street[1],city[1]);
  printf("%d.\nName: %s\nstreet: %s\ncity: %s\n",3,name[2],street[2],city[2]);
}


#include<stdio.h>
#include<string.h>
int main()
{
   int i,n;
   struct employee
   {
   char name[10];
   char street[20];
   char city[20];
   };
   scanf("%d",&n);
   struct employee emp[n];
   printf("Enter details of employee\n");
   for(i=0; i<n; i++){
        printf("Enter name:\t");
        scanf("%s\n",emp[i].name);
        printf("Enter street:\t");
        scanf("%s\n",emp[i].street);
        printf("Enter city:\t");
        scanf("%s\n",emp[i].city);
  }
  printf("*Employee Details*\n");
  printf("name\tstreet\tcity\n");
  for(int i=0;i<n;i++){
            printf("\n%s\t%s\t%s\n",emp[i].name,emp[i].street,emp[i].city);
  }
  return 0;
}



#include<stdio.h>
#include<string.h>
int main()
{
   int i,n;
   struct stationary
   {
   char name[10];
   int cost,qty;
   };
   scanf("%d",&n);
   struct stationary s[n];
   for(i=0; i<n; i++){
        printf("Enter name,cost and quantity :");
        scanf("%s %d %d",&s[i].name,&s[i].cost,&s[i].qty);
  }
  printf("\n\n\t*Stationary Details*\n");
  printf("\n Name\t Street\t City\n");
  for(int i=0;i<n;i++){
            printf("\n%s\t%d\t%d\n",s[i].name,s[i].cost,s[i].qty);
  }
  return 0;
}


#include<stdio.h>
 enum months { jan, feb, march, april, may};
 int main()
 {
 months m1,m2;
 m1=jan;
 m2=april;
 int diff=m2-m1;
 printf("Months between %d",diff);
 if(m1>m2)
 {
    printf("\nm2 comes before m1");
    return 0;
  } 
} 


#include<stdio.h>
int main()
{
int n=5;
printf("\n Acessing Value of n using its adddres:n=%d",*(&n));
printf("\n Acessing valuee of n using using name: n=%d\n",n);
return 0;
}  


#include<stdio.h>
int main()
{
int no=50;
int *p;
p=&no;
printf("\n value store in variable no is:\t%d",no);
printf("\n Address of variable no is:\t%ls",&no);
printf("\n value store in pointer variable p is:\t%ls",p);
printf("\n value store in pointer variable *p is:\t%d\n",*p);
return 0;
}  


#include<stdio.h>
int main()
{
int a,*ptr_a;
float b, *ptr_b;
char c, *ptr_c;
printf("\n Enter a character for c :");
scanf("%c",&c);
printf("\n Enter an integer value for a:");
scanf("%d",&a);
printf("\n Enter an float value for b:");
scanf("%f",&b);

ptr_a=&a;
ptr_b=&b;
ptr_c=&c;

printf("\n original address in ptr_a:%u",ptr_a);
printf("\n original address in ptr_b:%u",ptr_b);
printf("\n original address in ptr_c:%u",ptr_c);

ptr_a++;
ptr_b++;
ptr_c++;

printf("\n New address in ptr_a:%ls",ptr_a);
printf("\n New address in ptr_b:%f",ptr_b);
printf("\n New address in ptr_d:%s",ptr_c);
return 0;
}  


#include<stdio.h>
int main()
{
   int i=10, *p;
   p=&i;
   printf("value is:%d\n",*p);
}


#include<stdio.h>
int main()
{
   int a,b,*ptr1,*ptr2,x,y,z;
   a=12;
   b=4;
  ptr1=&a;
  ptr2=&b;
  x=*ptr1 **ptr2-6;
  u=4*-*ptr2 *ptr1 +10;
  printf("The address of a= %u\n",ptr1);;
   printf("The address of b= %u\n",ptr2);;
   printf("\n");
   printf("a= %d,b=%d\n",a,b);
   printf("x= %d,y=%d\n",x,y);
   *ptr2 = *ptr2+3;
   *ptr1 = *ptr2-5;
    z = *ptr1 + *ptr2 - 6;
    printf("\na = %d,b = %d",a,b);
    printf("z=%d\n",z);
    ptr1++;
    printf("The address in p1 = %u\n",ptr1);
    printf("*ptr1 = %d\n",*ptr1);
    ptr1--;
    printf("The address in ptr1" = %u\n",ptr1);
    printf("*ptr1 = %d\n", *ptr1);
}


#include<stdio.h>
int main()
{
  int ***r, **q, *p, i=7;
  p=&i;
  q=&p;
  r=&q;
  printf("%d %d %d\n",*p,**q,***r);
}



#include<stdio.h>
int main()
{
   int num1,num2;
   int *ptr1, *ptr2;
   printf("Enter first number:");
   scanf("%d",&num1);
   printf("Enter second number:");
   scanf("%d",&num2);
   ptr1=&num1;
   ptr2=&num2;
    printf("Product of two numbers:%d*%d = %d\n", *ptr1, *ptr2,((*ptr1)*(*ptr2)));
    return 0;
}



#include<stdio.h>
int main()
{
   int range,i=0,j=1,k,f;
   int *ptr_range, *ptr_i,*ptr_j;
   ptr_range=&range;
   ptr_i = &i;
   ptr_j = &j;
   printf("\nEnter the number range of fibonacci series:");
   scanf("%d",*(&ptr_range));
   printf("FIBONACII SERIES:");
   printf("%d ",i);
   printf("%d ",j);
   for(k=2;k<*ptr_range;k++)
   {
         f=*ptr_i+*ptr_j;
         printf("%d ",f);
         *ptr_i=*ptr_j;
         *ptr_i=f;
   }
   printf("\n");
    return 0;
}



#include<stdio.h>
int main()
{
   int a = 20;
   int *b = &a;
   int *c = b;
   int d = *b+*c;
   printf("%d\n",d);
}

#include<stdio.h>
int main()
{
   int a,b,*p1,*p2,x,y;
   a=10;
   b=5;
   p1=&a;
   p2=&b;
   x=*p1**p2-6;
   y=*p1**p2+10;
   printf("a=%d,b=%d",a,b);
   printf("x=%d,y=%d\n",x,y);
}


#include<stdio.h>
int main()
{
   float x[5];
   int i=0;
   float *ptr;
   for(i=0;i<5;i++)
   {
   printf("\nEnter a float array elements:");
   scanf("%f",&x[i]);
   printf("\nEnterelement is stored at %f\n",&x[i]);
   }
   ptr=&x;
   printf("\n Array Elements and their locations:\n");
   i=0;
   while(i<5)
   {
      printf("\n%5.2f is stored at %u",*ptr,ptr);
      ptr++;
      i++;
   }
    return 0;
}



#include<stdio.h>
int main()
{
   int *ptr, sum=0, number[5],i=0;
   for(i=0;i<5;i++)
   {
   printf("\nEnter %dth element:",i);
   scanf("%d",&number[i]);
   }
   i=0;
   ptr=&number[0];
   for(i=0;i<5;i++)
   {
      sum=sum+(*ptr++);
   }
   printf("\nSum of array elements = %d\n", sum);
   return 0;
}


#include<stdio.h>
int main()
{
   int *ptr, j=0, number[5],i=0;
   for(i=0;i<5;i++)
   {
   printf("\nEnter %dth element:",i);
   scanf("%d",&number[i]);
   }
   ptr=&number[4];
   for(i=0;i<5;i++)
   {
      printf("%d ",*ptr--);
   }
   printf("\n");
   return 0;
}



#include<stdio.h>
int main()
{
   int *p,j,i,x[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
   p=&x[0][0];
   printf("2D array is:\n");
   for(i=0;i<4;i++)
   {
         for(j=0;j<3;j++){
                  printf("%d\t",x[i][j]);
         }
         printf("\n");
   }
   printf("Element at:\n");
   printf("x[0][0]=%d\n",*p);
   printf("x[1][1]=%d\n",*(p+1*3+1));
   printf("x[2][0]=%d\n",*(p+2*3+0));
   printf("x[3][2]=%d\n",*(p+3*3+2));
   return 0;
}


#include<stdio.h>
int main()
{
   char str[10],*ptr,count;
   printf("\nEnter the string:");
   scanf("%s\n",str);
   
   ptr=&str[0];
   count=0;
   
   while(*ptr!='\0')
   {
           count++;
           ptr++;
   }
   printf("\nLength of string = %d\n",count);
   return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
   char str[10],*ptr;
   int len,i=0;
   printf("\nEnter the string:");
   scanf("%s",str);
   
   len=strlen(str);
   ptr=&str[len];
   
   printf("\nReverse of String:");
   for(i=0;i<=len;i++)
   {
          printf("%c",*(ptr)--);
   }
   printf("\n");
   return 0;
}



#include<stdio.h>
#include<string.h>
int main()
{
   char str[10],*p,ch='m';
   printf("\nEnter the string:");
   scanf("%s",str);
   
   p=str;
   
   while(*p!='\0')
   {
          if(*p==ch)
          {
             printf("Character m is found at %ld\n",p-str);
             break;
          }
          p++;
   }
   if(*p=='\0')
         printf("Character not found\n");
   return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
   char str[10],*ptr;
   int count=0,i;
   printf("\nEnter the string:");
   scanf("%s",str);
  
   for(ptr=str;*ptr!='\0';ptr++)
   {
      if(*ptr=='a'||*ptr=='A'||*ptr=='e'|| *ptr=='E'||*ptr=='i'||*ptr=='I'||*ptr=='o'|| *ptr=='O'||*ptr=='u'||*ptr=='U'||)
      {
      
          count++;
      }
      printf("number of vowels are:%d",count);
   }
   printf("\n");
   return 0;
}


#include<stdio.h>
void main()
{
int a;
int *p;
p=&a;
a=5;
printf("%p\n",p);
printf("%p\n",&p);//address of p
printf("%p\n",&a);
printf("%d\n",*p);
*p=8;//Deferencing
printf("%d %d\n",*p,a);
int b=20;
*p=b;
printf("%p\n",&p);//address of p
printf("%d\n",*p);
printf("Size of integer:%ld\n",sizeof(int));
printf("%p\n",&p+2);
printf("%d\n",*p+2);
printf("value at address p+1 is %d\n",*(p+2));
printf("address p+1 is %p\n",(p+2));
}


#include<stdio.h>
void main()
{
int a=1025;
int *p;
p=&a;
printf("Size of integer is %ld bytes\n",sizeof(int));
printf("Address = %p,value = %d\n",p,*p);
printf("Address = %p,value = %d\n",p+1,*p+1);
char *p0;
p0=(char*)p;// typecasting
printf("Size of integer is %ld bytes\n",sizeof(int));
printf("Address = %p,value = %d\n",p0,*p0);
printf("Address = %p,value = %d\n",p0+1,*(p0+1));
//void pointer-generic pointer
void *p1;
p1=p;
printf("Address = %p\n",p0);
}


#include<stdio.h>
void main()
{
int x=5;
int *p=&x;
*p=6;
int **q=&p;
int ***r=&q;
printf("%d\n",*p);
printf("%p\n",*q);
printf("%d\n",**q);
printf("%p\n",**r);
printf("%d\n",***r);
***r=10;
printf("x = %d\n",x);
**q=*p+2;
printf("x = %d\n",x);
}


#include<stdio.h>
void Increment(int *p)
{
   *p=(*p)+1;
}
int main()
{
   int a;
   a = 10;
   Increment(&a);
   printf("a=%d\n",a);
}


#include<stdio.h>
int main()
{
   int a[]={2,4,5,8,1};
   printf("%p\n",a);
   printf("%p\n",&a[0]);
   printf("%d\n",a[0]);
   printf("%d\n",*a);
}


#include<stdio.h>
int main()
{
   int a[]={2,4,5,8,1};
   int i;
   
   for(i=0;i<5;i++)
   {
      printf("Address = %p\n",&a[i]);
      printf("Address = %p\n",a+i);
      printf("value = %d\n",a[i]);
      printf("value = %d\n",*(a+i));
   }
}


//Function;

#include<stdio.h>
int SumOfElements(int A[], int size)
{
  int i, sum=0;
  for(i=0; i<size; i++)
  {
      sum+=A[i];
  }
  return sum;
}
int main()
{
  int A[]={1,2,3,4,5};
  int size = sizeof(A)/sizeof(A[0]);
  int total = SumOfElements(A,size);
  printf("Sum of elements = %d\n",total);
}

#include<stdio.h>
int SumOfElements(int *A)
{
  int i, sum=0;
  int size = sizeof(A)/sizeof(A[0]);
  printf("SOE - Size of A = %ld\nsize of A[0] = %ld\n",sizeof(A),sizeof(A[0]));
  for(i=0; i<size; i++)
  {
      sum+=A[i];
  }
  return sum;
}
int main()
{
  int A[]={1,2,3,4,5};
  int total = SumOfElements(A);
  printf("Sum of elements = %d\n",total);
  printf("Main - Size of A = %ld\nsize of A[0] = %ld\n",sizeof(A),sizeof(A[0]));
}


#include<stdio.h>
#include<string.h>
int main()
{
   char c[20];
   c[0] = 'J';
   c[1] = 'o';
   c[2] = 'h';
   c[3] = 'n';
   c[4] = '\0';
   int len = strlen(c); 
   printf("%s %d\n",c,len);
}


#include<stdio.h>
#include<string.h>
void print(const char *c)
{
   printf("%ld\n",sizeof(*c));
   while(*c!='\0')
   {
       printf("%c",*c);
       c++;
   }
   printf("\n");
}
int main()
{
  char c[20] = "Hello"; 
  printf("Hello World\n");
  print(c);
}

#include<stdio.h>
void main()
{
int c[3][2][2]={{{2,5},{7,9,}},
                {{3,4},{6,1}},
                {{0,8},{11,13}}};
printf("%d\n",*(c[0][0]+1));
}



#include<stdio.h>
void main()
{
int c[3][2][2]={{{2,5},{7,9,}},
                {{3,4},{6,1}},
                {{0,8},{11,13}}};
printf("%d\n",*(c[0][0]+1));
}

#include<stdio.h>
int total;
int square(int x)
{
   return x*x;
}
int squareofsum(int x,int y)
{
  int z=square(x+y);
  return z;
}
int main()
{
  int a,b;
  printf("Enter any two number:");
  scanf("%d %d",&a,&b);
  int result=square(a);
  total=squareofsum(a,b);
  printf("Output = %d result = %d\n",total,result);
}


#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a;
  int *p;
  
}

#include<stdio.h>
int main()
{
char*dist_name[5]={"Mumbai","Pune","Sangali","Satara","Kolhapur"};
int i=0;
printf("\nElements of array *dist_name are:\n");
for(i=0;i<5;i++)
{ 
  printf("\n Element %d=%s",i,dist_name[i]);
}
printf("\n");
return 1;
}


#include<stdio.h>
void main()
{
   int *a[4];
   int i;
   int m=10,n=20,p=30,q=40;
   a[0]=&m;
   a[1]=&n;
   a[2]=&p;
   a[3]=&q;
   for(i=0;i<4;i++)
   {
     printf("%d\n",*a[i]);
   }
}


#include<stdio.h>
void display(*int[]) 
int main()
{
  int num[4],i=0;
  for(i=0;i<4;i++)
  {
     printf("Enter Elements %d:",i);
     scanf("%d",&num[i]);
  }
  display(num);
  return 1;
}
void display(int n[])
{
  int i;
  printf("entered array is:");
  for(i=0;i<4;i++)
  {
     printf("%d\t",n[i]);
  }
}



#include<stdio.h>
void swap(int*,int*);
int main()
{
  int num1=50,num2=60;
  printf("value of num1 and num2 before swapping!\n");
  printf("value of num1:%d\n",num1);
  printf("value of num2:%d\n",num2);
  
  swap(&num1,&num2);
  
  printf("value of num1 and num2 after swapping!\n");
  printf("value of num1:%d\n",num1);
  printf("value of num2:%d\n",num2);
  return 1;
}
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}



#include<stdio.h>
#include<math.h>
int* min(int*,int*);
int main()
{
   int num1,num2;
   printf("Enter any two number:");
   scanf("%d %d",&num1,&num2);
   int*p;
   p=min(&num1,&num2);

   printf("The minimum between num1 and num2 is:%d\n",*p);
   return 0;
}
int *min(int *a,int *b)
{
  if(*a>*b)
  {
     return b;
  }
  else
  {
      return a;
  }
}


#include<stdio.h>
#include<math.h>
double mul(double,double);
double(*p1)(double,double);
int main()
{
  double x = 2.5,y = 3.4,z;
  p1 = mul;
  z = (*p1)(x,y);
  printf("%lf\n",z);
  return 0;
}
double mul(double a, double b)
{
  return a*b;
}

//the differnce between two same pointer type is always 1;
#include<stdio.h>
int main() {
int a = 5,b = 10,c;
int *p = &a,*q = &b;
c = p-q;
printf("%d\n",c);
return 0;
}


#include<stdio.h>
#include<string.h>
struct Date
{
  int dd,mm,yyyy;
}
d[3],*ptr;

int main()
{
  for(ptr=d;ptr<d+3;ptr++)
  {
    printf("\nEnter date (dd):");
    scanf("%d",&ptr->dd);
    printf("\nEnter month (mm):");
    scanf("%d",&ptr->mm);
    printf("\nEnter year (yyyy):");
    scanf("%d",&ptr->yyyy);
  }
  ptr=d;
  printf("\nDates are:");
  while(ptr<d+3)
  {
    printf("\n%d/%d/%d\n",ptr->dd,ptr->mm,ptr->yyyy);
    ptr++;
  }
  return 0;
}


#include<stdio.h>
void fun(int *x, int *y)
{
int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int x=10;
    int y=20;
    fun(&x,&y);
    printf("%d %d",x,y);
}


#include<stdio.h>
int main()
{
    int a[]={1,2,3,4};
    int *ptr=a;
    //cint *ptr=&a[0];
    printf("%p %d",a,*a);
    printf("\n%p  %d",ptr,*ptr);
}


#include<stdio.h>
int main()
{
  int a[]={1,2,3,4,5};
  for(int i=0;i<5;i++)
  {
     printf("%d\n",(*a)+i);
  }
}


#include<stdio.h>
int main()
{
  int a[]={5,4,8,6,9};
  for(int i=0;i<5;i++)
  {
     printf("%d\n",*a+i);
  }
}


#include<stdio.h>
int main()
{
   int a=6, b=5;
   int c=(++a)+(--b);
     printf("%d\n",c);
     printf("%d %d\n",a,b);
     printf("%d %d %d %d\n",++a,++b,--a,--b);
     printf("%d %d %d %d\n",a++,b++,a--,b--);
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,m,n;
  scanf("%d\n%d\n",&m,&n);
  int **arr=(int**)malloc(m*sizeof(int));
  for(i=0; i<m; i++)
  {
    *(arr+i)=(int*)malloc(n*sizeof(int));
    for(j=0; j<n; j++)
    {
      scanf("%d",*(arr+i)+j);
    }
  }
  for(i=0; i<m; i++)
  {
    for(j=0; j<n; j++)
    {
       printf("%d",*(*(arr+i)+j));
    }
    printf("\n");
  }
  return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int j;
   char arr[10]="Amruta";
   char *ptr=arr;
   for(j=0; j<sizeof(arr); j++)
   {
      printf("%c\n",*(ptr+j));
   }
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int j,n;
   scanf("%d\n",&n);
   char arr[n];
   fgets(arr, 50, stdin);
   char *ptr=arr;
   for(j=0; j<sizeof(arr)/sizeof(arr[0]); j++)
   {
      printf("%c\n",*(ptr+j));
   }
}


#include<stdio.h>
#include<stdlib.h>
int main()
{
   int j;
   char arr[20]="I am doing well!";
   char *ptr=arr;
   while(*ptr!='\0')
   {
      printf("%c",*ptr);
      ptr++;
   }
   printf("\n");
}


#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i,n,j,m;
   scanf("%d",&n);
   int arr[n];
   int *ptr=arr;
   for(i=0; i<n; i++)
   {
      scanf("%d",(ptr+i));
   }
   printf("Enter any number:");
   scanf("%d",&m);
   int k=0;
   for(i=0; i<n; i++)
   {
      if(*(ptr+i)==m)
      {
        k++;
        printf("Element is exist..\n");
        break;
      }
   }
   if(k==0)
   {
      printf("Element is not exist..\n");
      return 0;
   }
}

#include<stdio.h>
#include<string.h>
int main()
{
printf("*We Display Duplicate Elements of an array\n");
int i,j,p,n2,c,r,lable,*ptr1,*ptr2;
printf("Enter how many element as you want? :");
scanf("%d",&n2);
int arr[n2];
printf("Enter element as you want:");
for(p=0;p<n2;p++){
  if(p==n2){
        goto label;
    }
    scanf("%d",&arr[p]);
 }
 label:
    printf("Duplicate elements: ");
    int *ptr=arr;
    int x=0;
    for (i = 0; i < n2; i++) {
        for (j = i + 1; j < n2; j++) {
            if (*(ptr + i) == *(ptr + j)) {
                x++;
                printf("%d ", *(ptr + i));
                break;
            }
        }
    }
    if(x==0)
    {
        printf("There is no one duplicate value\n");
    }
}

#include<stdio.h>
#include<string.h>
int main()
{
int i,j,p,n2,c,r,lable;
printf("Enter how many element as you want? :");
scanf("%d",&n2);
int arr[n2];
printf("Enter element as you want:");
for(p=0;p<n2;p++){
  if(p==n2){
        goto label;
    }
    scanf("%d",&arr[p]);
 }
 label:
    printf("Reverse elements: ");
    int *ptr=arr;
    for (i = n2-1; i >= 0; i--) {
                printf("%d ", *(ptr + i));
        }
        printf("\n");
        return 0;
}



#include<stdio.h>
#include<string.h>
int main()
{
printf("*We Display mean,mode and median of an array\n");
int i,j,p,n2,c,r,lable, sum=0;
float mean;
printf("Enter how many element as you want? :");
scanf("%d",&n2);
int arr[n2];
printf("Enter element as you want:");
int *ptr=arr;
for(p=0;p<n2;p++){
  if(p==n2){
        goto label;
    }
    scanf("%d",&arr[p]);
    sum=sum+*(ptr+p);
 }
 label:
 mean=sum/n2;
 printf("Mean of the array:%f\n",mean);
 c=n2/2;
 printf("Median of the array:%d\n",*(ptr+c));
 return 0;
}



//Invlaid
#include<stdio.h>
int main()
{
printf("*We Display median of an two sorted array\n");
int i,j,k,n1,n2,temp,sum;
scanf("%d\n%d\n",&n1,&n2);
int ary1[n1];
int ary2[n2];
int ary3[n1+n2];
printf("Enter any number of elements in the array:");
int *ptr=ary1;
for(k=0;k<n1;k++){
        scanf("%d",ptr+k);
      }
      for(i=0;i<n1;i++){
              for(j=i+1;j<n1;j++){
                if(*ptr+i>*ptr+j){
                     temp=*ptr+i;
                     ptr+i=*ptr+j;
                     ptr+j=*temp;    
                }       
           } 
       }
       int *ptr1=ary2;
       for(k=0;k<n2;k++){
               scanf("%d",ptr1+k);
       }
       for(i=0;i<n2;i++){
              for(j=i+1;j<n2;j++){
                if(*ptr1+i>*ptr1+j){
                     temp=*ptr1+i;
                     ptr1+i=*ptr1+j;
                     ptr1+j=*temp;    
                }       
           }
      }
      int *ptr2=ary3;
      int c=1;
        if(c==1)
        {
            for(k=0;k<n1;k++){
                 ptr2+k=*ptr+k;
            }
            c++;
        }
         for(int m=0;m<n2;m++){
                 ptr2+k=*ptr1+m;
                 k++;
         }
         for(i=0;i<n1+n2;i++){
              for(j=i+1;j<n1+n2;j++){
                if(*ptr2+i>*ptr2+j){
                     temp=*ptr2;
                     ptr2+i=*ptr2+j;
                     ptr2+j=*temp;    
                }       
           }
      }
      int median=n1+n2/2;
      printf("%d\n",*ptr2+median);
      return 0;
 }
*/
/*
#include <stdio.h>
int main()
{
  	int l[5]={6,9,10,11,12};
  	int V=5,w=6;
  	int l2[6]={6,8,11,13,50,60};
  	int *p=l;
  	int *u=l2;
  	int n=sizeof (l)/sizeof l[0]+sizeof (l2)/sizeof l2[0];
  	int k[n];
  	int c=0,c1=0;
  	for(int i=0; i<V; i++)
 	{
 		k[c]=*(p+i);
 		c++;
 	}
 	int v=5;
 	for(int j=0;j<n;j++)
 	{
 		k[v]=*(u+j);
 		v++;
 	}
 	for(int i=0;i<n;i++)
 	{
 		printf("%d ",k[i]);
 	}
	int sz=sizeof (k);
	if(sz%2==0)
	{
		int n1=sz/2;
		int n2=n1-1;
		int c=(k[n1]+k[n2])/2;
		printf("\n%d\n",k[c]);
	}
	else
	{
		int c=sz/2;
		printf("%d\n",k[c]);
	}	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, l;
    scanf("%d", &n);
    char *s = (char *) malloc(100 * sizeof(char));
    char *ptrs = s;
    int x[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int *ptrx = x;
    char y[][10] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    char (*ptry)[10] = y;
    int c = 0;
    l = sizeof(x) / sizeof(x[0]);
    for (int i = 0; i < l; i++) {
        if (n >= *(ptrx + i)) {
            int p = n / (*(ptrx + i));
           
            for (int j = 0; j < p; j++) {
                for (int k = 0; y[i][k] != '\0'; k++) {
                    *(ptrs + c) = y[i][k];
                    c++;
                }
            }
        }
        n = n % (*(ptrx + i));
    }
    //printf("%s\n", s);
    for(int i=0;ptrs[i]!='\0';i++)
      {
          printf("%c",ptrs[i]);
      }
    free(s);
    return 0;
}

 
#include<stdio.h>          
int main()
{
    int i,j,k,n,temp;
    printf("*Find a number using binary search in the list*\n");
    printf("Enter number of elements in the array:");
    scanf("%d\n",&n);
    int ary[n];
    int *ptr=ary,*a;
    for(k=0;k<n;k++)
    {        
        scanf("%d",ptr+k); 
    }
    printf("Enter the elements:");
    scanf("%d",a+0);
    int lw=0;
    int hi=n-1;
    int mid;

    while(lw<=hi){
        mid=lw+(hi-lw)/2;
        if(ptr[mid]==*a) {
            printf("Element found at index:%d\n", mid);
            return 0;
        }
        else if(ptr[mid]<*a) {
            lw=mid+1;
        }
        else {
            hi=mid-1;
        }
    }

    printf("Element not found\n");
    return 0;
}             

#include<stdio.h>
int main()
{
int i=0,j,k,n,temp,sum,lable;
printf("*rotationally elements print*\n");
printf("Enter number of elements in the array:");
scanf("%d\n",&n);
int ary[n];
int *ptr=ary;
for(k=0;k<n;k++){
        scanf("%d",ptr+k);
      }
      for(i=0;i<n;i++){
              for(j=i+1;j<n;j++){
                if(ptr[i]>ptr[j]){
                     temp=ptr[i];
                     ptr[i]=ptr[j];
                     ptr[j]=temp;    
                }       
           } 
       }  
       printf("Enter the elements:");
       scanf("%d",&sum);
       int s=0;
       for(i=0; i<=n; i++){
          for(j=i+1; j<n; j++){
              s=ptr[i]+ptr[j];
              if(sum==s){
                  printf("%d %d\n",ptr[j],ptr[i]);
                  return 0;
              }
              else if(s>s){
                  break;
              }
         }
         
      }
      printf("No sublist found\n");
      return 0;
}
       

#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int values[] = { 5, 20, 29, 32, 63 };

int main () {
   int *item;
   int key = 20;
   /* using bsearch() to find value 32 in the array 
   item = (int*) bsearch (&key, values, 5, sizeof (int), cmpfunc);
   if( item != NULL ) {
      printf("Found item = %d\n", *item);
   } else {
      printf("Item = %d could not be found\n", *item);
   }
   return(0);
}

      

//acutrate program bsearch() function
#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}          
int main()
{
    int i,j,k,n,a;
    printf("*Find a number using binary search in the list*\n");
    printf("Enter number of elements in the array:");
    scanf("%d\n",&n);
    int ary[n];
    for(k=0;k<n;k++)
    {        
        scanf("%d",&ary[k]); 
    }  
    printf("Enter the elements:");
    scanf("%d",&a);
    int *item;
   /* using bsearch() to find value 32 in the arry
   item = (int*) bsearch (&a, ary, 5, sizeof (int), cmpfunc);
   if( item != NULL ) {
      printf("Found item = %d\n", *item);
   } else {
      printf("Item = %d could not be found\n", *item);
   }
   return(0);
}



#include<stdio.h>
int main()
{
int i,j,k,n,temp,sum,lable;
printf("*sorting elements by using Insertion sort*\n");
printf("Enter any number of elements in the array:");
scanf("%d\n",&n);
int ary[n];
int *ptr=ary;
for(k=0;k<n;k++){
        scanf("%d",ptr+k);
      }
      for(i=1;i<n;i++){
              for(j=i;j>=1;j--){
                if(ptr[j-1]>ptr[j]){
                     temp=ptr[j-1];
                     ptr[j-1]=ptr[j];
                     ptr[j]=temp;    
                }       
           } 
       }
       printf("@After sorting array@\n");
       for(int l=0; l<n; l++ ){       
           printf("%d\n",*(ptr+l));  
       }
       return 0;
}


#include <stdio.h>
#include <string.h>
int main() {
    char rnu[100];
    int dec = 0;
    int values[100];
    int i, j,len;
    printf("Enter a Roman numeral: ");
    scanf("%s", rnu);
    char *rom=rnu;
    len=strlen(rom);
    for(i = 0; i < len; i++) {
        switch(*rom+i) {
            case 'I':
                values[i] = 1;
                break;
            case 'V':
                values[i] = 5;
                break;
            case 'X':
                values[i] = 10;
                break;
            case 'L':
                values[i] = 50;
                break;
            case 'C':
                values[i] = 100;
                break;
            case 'D':
                values[i] = 500;
                break;
            case 'M':
                values[i] = 1000;
                break;
            default:
                printf("Invalid Roman numeral.\n");
                return 0;
        }
    }
    for(i=0; i<len; i++) {
        if( i==len-1 || values[i] >= values[i+1]) {
            dec=dec+values[i];
        }
        else {
            dec=dec-values[i];
        }
    }
   printf("The decimal equivalent of %s is %d.\n", rom,dec);
    return 0;
}



#include<stdio.h>
#include<string.h>
int main()
{
  int i,v,n,r;
  char s[100];
  char *s1=s;
  int a[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
  int *p=a;
  char b[][3]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
  char *ptr=b[3];
  n=sizeof(a)/sizeof(a[0]);
  scanf("%d",&v);
  for(int i=0;i<n;i++)
    {
      if(v>=*(p+i))
        {
           r=v/(*(p+i));
          for(int j=0;j<r;j++)
             {
              strcat(s,*(b+i));
             }
        }
        v=v%*(a+i);
       }
        if(v==0)
          {
             i=i+n;
            }
     
     printf("%s\n",s1);
     return 0;
}

#include<stdio.h>
int main()
{
  int i,j;
  printf("*accessing element of an multidimensional array*\n");
  int a[2][3]={{1,2,3},{6,8,9}};
  int *p=&a[3];
  //printf("%d\n",*(*(p+1)+2));
  for(i=0;i<2;i++){
      for(j=0;j<3;j++){
           printf("%d ", *(*(p+i)+j));
          }
    }
    return 0;
}




#include<stdio.h>
int main()
{
printf("*store all the factors of a number*\n");
int i=1,n,a=0,c=0;
printf("enter any number:");
scanf("%d",&n);
int aree[100];
int *ptr=aree;
while(i<n+1){
     if(n%i==0){
         *(ptr+a)=i;
         c=c+1;
         a=a+1;
         i=i+1;
     }else{
         i=i+1;
     }
    }
    *(ptr+i)=n;
     for(i=0; i<c; i++){
         printf("%d\n",*(ptr+i));
   }
 return 0;
}

 
#include<stdio.h>
void main()
{
char s[]="Welcome Amruta Bagde";
char *ptr=s;
int i;
for(i=0; s[i]!='\0'; i++){
   printf("%c",*(ptr+i));
 }
 printf("\n");
}



#include<stdio.h>
#include<string.h>
void main()
{
 char str[20],str1[20];
 char *p=str, *ptr=str1;
 int i,j;
 printf("Enter any string1 as you want:");
 scanf("%s",p);
 printf("Enter any string2 as you want:");
 scanf("%s",ptr);
 i=strlen(p);
 j=strlen(ptr);
 if(i>j){
     printf("long string are str which have length:%s=%d\n",p,i);
   }
   else if(j>i){
       printf("long string are str1 which have length:%s=%d\n",ptr,j);
      }
   else{
      printf("both of the strings are equal which have length:%d\n",j);
   }
 }


#include<stdio.h>
int main()
{
  printf("*We store Reversing Element of an array*\n");
  int p,q,n2;
  printf("Enter how many element as you want? :");
  scanf("%d",&n2);
  int aree[n2];
  int *ptr=aree;
  printf("Enter element as you want:\n");
  for(p=n2-1; p>=0; p=p-1){
       scanf("%d",ptr+p);
      }
      for(q=0;q<n2;q++){
            printf("aree[%d]=%d\n",q,*(ptr+q));
     }  
}  


#include<stdio.h>
int main()
{
printf("*Find the Position of an array element as you want*\n");
char dash[6]={4,6,8,2,9,5};
char *ptr=dash;
int b=0,num,i;
printf("Enter an element we want to search an array:");
scanf("%d",&num);
for(i=0;i<6;i++){
     if(*(ptr+i)==num){
          b++;
          printf("wow! nice we are searching element at a position: %d\n",i);
          break;
      }
      else{
   } 
 } if(b==0){
       printf("oopss! we are not searching an element at a position:\n");
     }
     else {
  }   
}


#include<stdio.h>
int main()
{
printf("*Deleting element an array at give position*\n");
char ary[6]={4,8,9,6,7};
char *ptr=ary;
int a=5,k,m=0,n3,n;
printf("Enter position of a Deleted Element:\n");
scanf("%d",&n);
n3=sizeof(ptr);
if(n>=n3+1){
     printf("Deletion is not possible in the array\n");
     }
     else{
    for(k=n-1;k<n3;k++){
         *(ptr+k)=*(ptr+k+1);
      }
      for(k=0;k<n3;k++){
          printf("%d\n",*(ptr+k));
      }   
       printf("Size of an array:%ld\n",sizeof(ptr));
   }      
}

#include<stdio.h>
int greater(int *,int *);
int main()
{
  int x,y;
  scanf("%d\n%d",&x,&y);
  greater(&x,&y);
  return 0;
}
int greater(int *a,int *b)
{
  if(*a>*b)
  {
     printf("%d is greater number\n",*a);
  }
  else
  {
  printf("%d is greater number\n",*b);
  }
}

#include<stdio.h>
int fun(int *);
int main()
{
  int num=10;
  fun(&num);
  printf("value after function call: %d\n",num);
}
int fun(int *num)
{
  *num=(*num)+10;
  printf("value inside function: %d\n",*num);
}

#include<stdio.h>
void cube(int *a);
int main()
{
  int num;
  scanf("%d",&num);
  printf("The number is: %d",num);
  cube(&num);
  return 0;
}
void cube(int *a)
{
  printf("\nCube of the number is: %d\n",(*a)*(*a)*(*a));
}


#include<stdio.h>
int square();
int main()
{
  int num;
  printf("Enter a Number:");
  scanf("%d",&num);
  int result = square(&num);
  printf("The Square is: %d\n",result);
  return 0;
}
int square(int *num)
{
  int s;
  s=(*num)*(*num);
  return s;
}

/*
#include<string.h>
#include<stdio.h>
#include<ctype.h>
void main(void)
{
  int length,i;
  char string[20]="THIS IS A STRING.";
  char *str=string;
  length=strlen(str);
  for(i=0;i<length;i++)
  {
     if((*(str+i)>='A')&&(*(str+i)<='Z'))
     {
          *(str+i)=tolower(*str+i);
     }
  }
  printf("lower:%s",*str);
  for(i=0;i<length;i++)
  {
     if((*(str+i)>='a') && (*(str+i)<='z'))
     {
        *(str+i)=toupper(*(str+i));
     }
  }
  printf("\nupper:%s\n",*str);
}


#include<stdio.h>
#include<string.h>
float area(float *);
int main(void)
{
  float r;
  printf("Enter radius of circle:");
  scanf("%f",&r);
  printf("Area of the circle is:%5.2f\n",area(&r));
  return 0;
}
float area(float *r)
{
return (*r)*(*r)*3.14;
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
int reverse(int *a);

int main(void)
{
  int num;
  printf("Enter an integers:\t");
  scanf("%d",&num);
  printf("reverese of entered number is: %d\n",reverse(&num));
  return 0;
}
int reverse(int *n)
{
  int rev=0;
  while(*n!=0)
  {
     rev=rev*10+(*n%10);
     *n=*n/10;
  }
  return rev;
}


#include<stdio.h>
void display(int *a);
int a=50;
int main()
{ 
  int i=20;
  printf("In main() function \n a=%d\n i=%d",a,i);
  display(&i);
  return 1;
}
void display(int *j)
{
int k=35;
printf("\nIn display() function \n a=%d\n j=%d\n k=%d\n",a,*j,k);
}


//acurate
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,m,n,*min,max,sum=0;
  printf("Enter the rows and columns:\n");
  scanf("%d\n%d",&m,&n);
  printf("Enter the elements:");
  int **arr=(int**)malloc(m*sizeof(int));
  for(i=0; i<m; i++)
  {
    *(arr+i)=(int*)malloc(n*sizeof(int));
    for(j=0; j<n; j++)
    {
      scanf("%d",*(arr+i)+j);
      sum=sum+*(*(arr+i)+j);
    }
  }
  max=0;
  for(i=0; i<m; i++)
  {
    for(j=0; j<n; j++)
    {
      if(*(*(arr+i)+j)>max)
      {
          max=*(*(arr+i)+j);
      }
    }
  }
  min=&arr[0][0];
  for(i=0; i<m; i++)
  {
    for(j=1; j<n; j++)
    {
      if(*(*(arr+i)+j)<*min)
      {
          *min=*(*(arr+i)+j);
      }
    }
  }
  for(i=0; i<m; i++)
  {
    for(j=0; j<n; j++)
    {
       printf("%d",*(*(arr+i)+j));
    }
    printf("\n");
  }
  printf("sum=%d maximum=%d minimum=%d\n",sum,max,*min);
  return 0;
}



//acurate
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,m,n,*min,max,sum=0;
  printf("Enter the rows and columns:\n");
  scanf("%d\n%d",&m,&n);
  printf("Enter the elements:");
  int **arr=(int**)malloc(m*sizeof(int));
  for(i=0; i<m; i++)
  {
    *(arr+i)=(int*)malloc(n*sizeof(int));
    for(j=0; j<n; j++)
    {
      scanf("%d",*(arr+i)+j);
      sum=sum+*(*(arr+i)+j);
    }
  }
  max=0;
  for(i=0; i<m; i++)
  {
    for(j=0; j<n; j++)
    {
      if(*(*(arr+i)+j)>max)
      {
          max=*(*(arr+i)+j);
      }
    }
  }
  for(i=0; i<m; i++)
  {
    for(j=0; j<n; j++)
    {
      if(*(*(arr+i)+j)==max)
      {
         int k=i, l=j;
         printf("Columns elements:\n");    
         for(i=0; i<m; i++)
         {
            printf("%d ",*(*(arr+i)+j));
         }
         printf("\n");
         *(arr)=(int*)malloc(m*sizeof(int));
         printf("Rows elements:\n");
         for(l=0; l<m; l++)
         {
            printf("%d ",*(*(arr+k)+l));
         }
         printf("\n");     
      }
    }
  }
  printf("sum=%d maximum=%d\n",sum,max);
  return 0;
}




//acurate
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,k,l,m,n;
  printf("Enter the rows and columns:\n");
  scanf("%d\n%d",&m,&n);
  printf("Enter the elements:");
  int **arr=(int**)malloc(m*sizeof(int));
  for(i=0; i<m; i++)
  {
    *(arr+i)=(int*)malloc(n*sizeof(int));
    for(j=0; j<n; j++)
    {
      scanf("%d",*(arr+i)+j);
    }
  }
    int **arr2=(int**)malloc(m*sizeof(int));
  for(i=0; i<m; i++)
  {
    *(arr2+i)=(int*)malloc(n*sizeof(int));
    for(j=0; j<n; j++)
    {
      *(*(arr2+i)+j) = *(*(arr+j)+i);
    }
  }
  for(i=0; i<m; i++)
  {
    for(j=0; j<n; j++)
    {
       printf("%d",*(*(arr2+i)+j));
    }
    printf("\n");
  }  
  return 0;
}



//acurate program
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,m,n,*min,max,sum=0;
  printf("Enter the rows and columns:\n");
  scanf("%d\n%d",&m,&n);
  printf("Enter the elements:");
  int **arr=(int**)malloc(m*sizeof(int));
  for(i=0; i<m; i++)
  {
    *(arr+i)=(int*)malloc(n*sizeof(int));
    for(j=0; j<n; j++)
    {
      scanf("%d",*(arr+i)+j);
      sum=sum+*(*(arr+i)+j);
    }
  }
  for(i=0; i<m; i++)
  {
    for(j=0; j<n; j++)
    {
       if(i==j)
       {
          printf("%d ",*(*(arr+i)+j));
       }
    }
  }
  printf("\n");
}


//acurate program
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,m,n,*pv,*rv;
  printf("Enter the rows and columns:\n");
  scanf("%d\n%d",&m,&n);
  printf("Enter the elements:");
  int **arr=(int**)malloc(m*sizeof(int));
  for(i=0; i<m; i++)
  {
    *(arr+i)=(int*)malloc(n*sizeof(int));
    for(j=0; j<n; j++)
    {
      scanf("%d",*(arr+i)+j);
    }
  }
   pv=(int*)malloc(sizeof(int));
   rv=(int*)malloc(sizeof(int));
  printf("Enter place Value and Replace Value:");
  scanf("%d\n%d",pv,rv);
  int Dup;
  for(i=0; i<m; i++)
  {
    for(j=0; j<n; j++)
    {
          if(*(*(arr+i)+j)==(*pv))
          {
            Dup=*(rv);
            *(*(arr+i)+j)=Dup;
          } 
    }
  }
  for(i=0; i<m; i++)
  {
    for(j=0; j<n; j++)
    {
          printf("%d ",*(*(arr+i)+j));
    }
    printf("\n");
  }
  return 0;
}


//acurate
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,m,n,*min,max,sum=0;
  printf("Enter the rows and columns:\n");
  scanf("%d\n%d",&m,&n);
  printf("Enter the elements array1:");
  int **arr=(int**)malloc(m*sizeof(int));
  for(i=0; i<m; i++)
  {
    *(arr+i)=(int*)malloc(n*sizeof(int));
    for(j=0; j<n; j++)
    {
      scanf("%d",*(arr+i)+j);
    }
  }
  printf("Enter the elements array2:");
  int **arr2=(int**)malloc(m*sizeof(int));
  for(i=0; i<m; i++)
  {
    *(arr2+i)=(int*)malloc(n*sizeof(int));
    for(j=0; j<n; j++)
    {
      scanf("%d",*(arr2+i)+j);
    }
  }
  printf("Adding the elements of the two 2D's array")
  int **arr3=(int**)malloc(m*sizeof(int));
  for(i=0; i<m; i++)
  {
    *(arr3+i)=(int*)malloc(n*sizeof(int));
    for(j=0; j<n; j++)
    {
     *(*(arr3 + i) + j)=*(*(arr + i) + j)+*(*(arr2 + i) + j);
      printf("%d ",*(*(arr3+i)+j));
    }
    printf("\n");
  }
}



#include<stdio.h>
int fibbo(int*);
int main()
{
  int n,i=0,c;
  printf("Enter value of n:");
  scanf("%d",&n);
  printf("\nFibonacci series\n");
  for(c=1;c<=n;c++)
  {
    printf("%d ",fibbo(&i));
    i++;
  }
  printf("\n");
}
int fibbo(int *n)
{
   if((*n)==0)
   {
      return 0;
   }
   else if((*n)==1)
   {
      return 1;
   }
   else
   {
       int a = 0, b = 1, fib;
       for (int i = 2; i <= *n; i++)
       {
         fib = a + b;
         a = b;
         b = fib;
       }
       return fib;
     
   }
}



#include<stdio.h>

int* fun(int* i)
{
  *i = *i + 1;
  printf("%d\n", *i);
  return i;
}

int main()
{
  int i = 10;
  int* p = &i;
  
  p = fun(fun(++p));
  printf("%d\n", *p);
  
  return 0;
}




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


#include<string.h>
#include<stdio.h>
int main(void)
{
  char dest_string[]="Programming language";
  char src_string[]="C Programming";
  char *ptr=dest_string;
  char *ptr1=src_string;
  printf("Before copy\n");
  printf("Destination string:\t%s\nSource string :\t\t%s\n",ptr,ptr1);
  strcpy(ptr,ptr1);
  printf("\nAfter copy");
  printf("\nDestination string:\t%s\nSource string:\t\t%s\n",ptr,ptr1);
  return 0;
}


#include<string.h>
#include<stdio.h>
int main(void)
{
  char string[15];
  char *ptr=string;
  printf("Entera string:\t");
  scanf("%s",ptr);
  printf("The length of entered string is:%ld\n",strlen(ptr));
  return 0;
}

#include<string.h>
#include<stdio.h>
int main(void)
{
  char string[15];
  char *ptr=string;
  char ch = 'o';
  printf("Entera string:\t");
  scanf("%s",ptr);
  if(strchr(ptr,ch))
  {
      printf("The character %c is at position: %ld\n",ch,strchr(ptr,ch)-ptr+1);
  }
  else
  {
     printf("The character was not found\n");
     return 0;
  }
}


#include<stdio.h>
#include<string.h>
int main(void) {
  char string[15];
  char ch = 'o';

  printf("Enter a string: ");
  scanf("%s", string);

  char* position = strchr(string, ch);
  if (position) {
    printf("The character %c is at position: %ld\n", ch, position - string + 1);
  } else {
    printf("The character was not found\n");
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
  char *ptr=str1, *ptr1=str2, *ptr2=str3;
  printf("\nFirst string:\t%s",ptr);
  printf("\nSecond string:\t%s",ptr1);
  
  strcat(ptr,ptr2);
  strcat(ptr,ptr1);
  printf("\nfirst + second:\t%s\n",ptr);
  return 0;
}

#include<stdlib.h>
#include<stdio.h>
int main(void)
{
  int i;
  printf("five random numbers from 0 to 99 are:\n\n");
  int *rn=(int*)malloc(5*(sizeof(int)));
  for(i=0;i<5;i++)
  {
      printf("%d\n",rand() % 100);
  }
  free(rn);
  return 0;
}


#include<stdio.h>
void main()
{
int n,i=1;
int *ptr=&i;
printf("Enter any number:\n");
scanf("%d",&n);
printf("Odd Numbers:\n");
while(*ptr<=n*2){
     printf("%d\n",*ptr);
     *ptr=*ptr+2;
    }
 
}


#include<stdio.h>
#include<string.h>
int main()
{
 char ary[100];
 char *ptr=ary;
 fgets(ptr, sizeof(ary), stdin);
 printf("%s\n", ptr);
}

#include<stdio.h>
#include<string.h>
int main()
{
   char str[10],*ptr;
   int count=0,i;
   printf("\nEnter the string:");
   scanf("%s",str);
  
   for(ptr=str;*ptr!='\0';ptr++)
   {
      if(*ptr=='a'||*ptr=='A'||*ptr=='e'||*ptr=='E'||*ptr=='i'||*ptr=='I'||*ptr=='o'||*ptr=='O'||*ptr=='u'||*ptr=='U')
      {
      
          count++;
      }
   }
      printf("number of vowels are:%d",count);
      printf("\n");
      return 0;
}


#include<stdio.h>

void fun(int n, int m, int mat[][3])
{
        for(int i=0; i<n; i++)
        {
          for(int j=0; j<m; j++)
          {
            printf("%d",mat[i][j]);
          }
          printf("\n");
        }
     }
     int main()
     {
       int n=3, m=3;
       int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
       fun(n,m,mat);
       return 0;
 }



          
#include<stdio.h>
#include<stdlib.h>
void fun(int n, int m, int *mat[][3])
{
        for(int i=0; i<n; i++)
        {
          for(int j=0; j<m; j++)
          {
            printf("%d ",*mat[i][j]);
          }
          printf("\n");
        }
     }
     int main()
     {
       int n=3, m=3;
       int *mat[n][3], p;
       for(int i = 0; i < n; i++) 
       {
        for(int j=0; j<m; j++) 
        {           
         mat[i][j]=(int*)malloc(sizeof(int*));
         scanf("%d",&p);
         *mat[i][j]=p;
        }
     }
     fun(n,m,mat);
       //free allocated memory
       for(int k=0; k<n; k++)
       {
         for(int l=0; l<m; l++)
         {
             free(mat[k][l]);
         }
       }
       return 0;
 }
*/
                  
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
        


















