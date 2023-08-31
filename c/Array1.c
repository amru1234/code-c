/*
#include<stdio.h>
int main()
{
char myself[]={1,2,3,4,5};
int i,j,num;
printf("*change element of an array*\n");
myself[3]=9;
printf("%d\n",myself[3]);
for(i=0;i<5;i++){
     printf("%d\n",myself[i]);    
  }
 
printf("@set the element of an array@\n");
char amru[4];
amru[0]=2;
amru[1]=6;
amru[2]=8;
amru[3]=10;
printf("%d %d %d %d\n",amru[0],amru[1],amru[2],amru[3]);

printf("*accessing element of an multidimensional array*\n");
char op[2][3]={{1,2,3},{6,8,9}};
printf("%d\n",op[1][2]);
 
 for(i=0;i<2;i++){
      for(j=0;j<3;j++){
           printf("%d\n",op[i][j]);
          }
    }
printf("*Find the Position of an array element as you want*\n");
char dash[6]={4,6,8,2,9,5};
int b=0;
printf("Enter an element we want to search an array:");
scanf("%d",&num);
for(i=0;i<6;i++){
     if(dash[i]==num){
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

printf("*We store Reversing Element of an array*\n");
char aree[6];
int p,q,n2;
printf("Enter how many element as you want? :");
scanf("%d",&n2);
printf("Enter element as you want:\n");
for(p=n2-1; p>=0; p=p-1){
       scanf("%hhd ",&aree[p]);
      }
 for(q=0;q<n2;q=q+1){
   printf("aree[%d]=%d\n",q,aree[q]);
 } 


#include<stdio.h>
#include<string.h>
void main()
{
 char str[20],str1[20];
 int i,j;
 printf("Enter any string1 as you want:");
 scanf("%ls",str);
 printf("Enter any string2 as you want:");
 scanf("%ls",str1);
 i=strlen(str);
 j=strlen(str1);
 if(i>j){
     printf("long string are str which have length:%d",str,i);
   }
   else if(j>i){
       printf("long string are str1 which have length:%d",str1,j);
      }
   else{
      printf("both of the strings are equal which have length:%d\n",i,j);
   }
 }

 
#include<stdio.h>
void main()
{
char s[]="Welcome Amruta Bagde";
int i;
for(i=0; s[i]!='\0'; i++){
    }
   printf("%d\n",i);
}


#include<stdio.h>
#include<math.h>
int main()
{
int i=1,n,r,b=0;
int a[100];
while(i<n){
   int temp=i,c=0;
   while(temp>0){
        c=c+1;
        temp=temp/10;
     }
     int s=0,m=i;
     while(m>0){
         r=m%10;
         s=s+pow(r,c);
         m=m/10;
    }
    if(s==i){
    while()
       a[b]=i
       i=i+1;
    }else{
       i=i+1;
     }
     printf("%ls",a);
   }
   return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
printf("*We Display Duplicate Elements of an array\n");
char aree[6],;
int p,q,n2,c,r,lable;
printf("Enter how many element as you want? :");
scanf("%d",&n2);
printf("Enter element as you want:");
for(p=0;p<n2;p++){
  if(p==n2){
        goto label;
    }
    scanf("%hhd",&aree[p]);
 }
 label:
 for(q=0; q<n2; q=q+1){
 int r=q+1,c=1;
 while(r<n2){
 if(aree[q]==aree[r]){
            c=c+1;
      }
      r=r+1;
     }   
            if(c>1){
           printf("Duplicate Elements:%d\n",aree[q]);
        }
   }	
  return 0;
}
*/

#include<string.h>
#include<stdio.h>
int main()
{
printf("*We Display mean, median, mode Elements of an array\n");
char aree[6];
int p,q,n2,c,r,median,label,sum=0;
float mean;
printf("Enter how many element as you want? :");
scanf("%d",&n2);
printf("Enter element as you want:");
for(p=0;p<n2;p++){
  if(p==n2){
        goto label;
    }
    scanf("%hhd",&aree[p]);
    sum=sum+aree[p];
 }
 label:
    mean=sum/n2;
    median=n2/2;
    printf("Mean and Median:%f,%d\n",mean,aree[median]);
    for(int q=0; q<n2; q=q+1){
     c=1;
     for(int r=q+1; r<n2; r++){
        if(aree[q]==aree[r]){
           c=c+1;
        }
     }
    if(c>1){
              printf("mode of an elements:%d\n",aree[q]);
      }
     }   
  return 0;
}
/*
#include<stdio.h>
int main()
{
int i,j,k,n,temp,sum,lable;
printf("*sorting elements by using selection sort*\n");
printf("Enter any number of elements in the array:");
scanf("%d\n",&n);
int ary[n];
for(k=0;k<n;k++){
        scanf("%d",&ary[k]);
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
       printf("@After sorting array@\n");
       for(int l=0; l<n; l++ ){       
           printf("%d\n",ary[l]);  
       }
       return 0;
}


#include<stdio.h>
int main()
{
int i,j,k,n,b=2,temp;
printf("*sorting elements by using Bubble sort*\n");
printf("Enter any number of elements in the array:");
scanf("%d\n",&n);
int ary[n];
for(k=0;k<n;k++){
        scanf("%d\n",&ary[k]);
      }
      printf("Enter any elements:");
      int a=1;
      for(i=0; i<n; i++){
         while(a<=b){
           if(a==b){
              if(ary[i-1]>ary[i]){
                temp=ary[i-1];
                ary[i-1]=ary[i];
                ary[i]=temp;
                a=1;
              }else 
                 a=1;
            }
            a=a+1;     
       }
       a=a+1;
    }      
       printf("@After sorting array@\n");
       for(int l=0; l<n; l++ ){       
           printf("%d\n",ary[l]);  
       }
       return 0;
}              

#include<stdio.h>
int main(){
int arr[100],n,k,i,j,temp;
printf("list:");
scanf("%d",&n);
printf("Enter the list elements:");
for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
}
printf("Enter the Value of K:");
scanf("%d",&k);
for(i=0; i<k; i++){
    temp = arr[0];
    for(j=0; j<n-1; j++){
        arr[j]= arr[j+1];
    }
    arr[n-1] = temp;
  }
   printf("Rotated list with gap of %d: ",k);
  for(i=0; i<n; i++){
         printf("%d ",arr[i]);
         if(i!= 3){
           printf("%c", ' ' +(i% k== k-1));
    }
   }
   return 0;
}



 #include<stdio.h>
 #include<string.h>
 int main(){
 int a,n,i,d,j;
 printf("Enter any number:\n");
 scanf("%d",&a);
 scanf("%d",&n);
 int l[n];
 char r[n];
 char c[1][3];
 printf("Enter any number:\n");
 scanf("%d",&a);
 printf("Enter any decimal numbers:");
 for(i=0;i<n;i++){
     scanf("%d",l[i]);
  }
  printf("Enter roman number:");
  for(i=0;i<n;i++){
     scanf("%s",r[i]);
  }
 for(i=0; i<n; i++){
    if(a>=l[i]){
       d=a/l[i];
       for(int j=0; j<a; j++){
         strcat(r,c[i]);
       }
    }
    a=a%l[i];
    } if(a==0){
          i=i+n;
       }
       printf("%s\n",r);
       return 0;
 }
       


#include<stdio.h>
#include<string.h>
int main()
{
  int i,v,n,p;
  char s[100];
  int a[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
  char b[][3]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
  n=sizeof(a)/sizeof(a[0]);
  scanf("%d",&v);
  for(int i=0;i<n;i++)
    {
      if(v>=a[i])
        {
           p=v/a[i];
          for(int j=0;j<p;j++)
             {
              strcat(s,b[i]);
             }
        }
        v=v%a[i];
       }
        if(v==0)
          {
             i=i+n;
            }
     
     printf("%s\n",s);
     return 0;
}
  
#include<stdio.h>
#include<string.h>
int main(){
  int i=0,n,s,c=0;
  char str;
  char s[100];
  int a[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
  char b[][3]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
 len=sizeof(b)/sizeof(b[0]);
 scanf("%s",str)
 n=strlen(str);
 int dec[];
 while(i<n){
    int j=0;
    while(j<len){
     if(a[i]==b[j]){
       dec[c]=a[j];
       c++;
       j++;
     }
     j=j+1
    }
    i++;
  }
  s=0,i=0;
  while(i<c+1-1){
      if(dec[i]>=dec[i+1]){
          s=s+dec[i];
          i++;
      } else {
         s=s-dec[i]
         i++;
      }
    }
    s=s+dec[c-1];
    printf("%d",s);
    return 0;
  }
 
#include <stdio.h>
#include <string.h>
int main() {
    char rnu[100];
    int dec = 0;
    int values[100];
    int i, j, len;
    printf("Enter a Roman numeral: ");
    scanf("%s", rnu);
    len=strlen(rnu);
    for(i = 0; i < len; i++) {
        switch(rnu[i]) {
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
   printf("The decimal equivalent of %s is %d.\n", rnu,dec);
    return 0;
}
*/
 
 
 
 
 
 
 
 
 
 
 
