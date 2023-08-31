/*
#include<stdio.h>
int main()
{
printf("*store all the factors of a number*\n");
int i=1,n,a=0;
printf("enter any number:");
scanf("%d",&n);
char aree[100];
while(i<n+1){
     if(n%i==0){
         aree[a]=i;
         a=a+1;
         i=i+1;
     }else{
         i=i+1;
     }
    }
    aree[i]=n;
     for(i=0; i<n; i++){
         printf("%d\n",aree[i]);
   }
 return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
printf("*store all the factors of a number*\n");
int i=0,n,b=0;
printf("enter any number:");
scanf("%d",&n);
int str[n];
while(i<n){
     int m=i+1,f=1;
     if(m>0){
         f=f*m;
         m=m-1;
     }else
       str[i]=f;
       i=i+1;
   }
   for(int k=0; k<n; k++){
         printf("%d\n",str[k]);      
     }
      return 0;
 }




#include<stdio.h>
int main()
{
printf("*store all the factors of a number*\n");
int i=0,n;
printf("enter any number:");
scanf("%d",&n);
while(i<n){
     int m=i+1,f=1;
     if(m>0){
         f=f*m;
         m=m-1;
     }else
          printf("%d",f);
          i=i+1;
     }
     return 0;
 }

#include<stdio.h>
#include<string.h>
int main()
{
printf("*We Display Duplicate Elements of an array\n");
int p,k,c,n2,yes,m,s=0;
printf("Enter how many element as you want? :");
scanf("%d",&n2);
char aree[n2],u[n2];
printf("Enter element as you want:");
for(p=0;p<n2;p++){
  if(p==n2){
        goto label;
    }
    scanf("%hhd",&aree[p]);
 }
 label:
    printf("Enter any rotational no.:");
    scanf("%d\n",&k);
    int q=1,r=0;
    while(q<=k){
     while(r<n2){
        int d=1;
        for( m=0; m<sizeof(u); m++){
           if(aree[r]!=u[m]){
                d=0;
           }
           r++;
           q=q;
         }if(d==0){
            goto yes;
          } else
           r++;
           q=q;
        yes:
          if(q==k){     
            u[s]=aree[r];
            printf("%d ",u[s]);
            s++;
            c=c+1;
            if(n2==c){
                break;
              }
            r=r+1;
            q=1;
        }
        r++;
        q++;
     } 
     r=0;
     q=q;
   }
   return 0;
}

 
 
/*
 #include<stdio.h>
int main()
{
char ary[20];
int i,j,k,n,temp;
printf("*Sorting elements of an array*\n");
printf("Enter number of elements in the array:");
scanf("%d",&n);
printf("Enter the elements:");
for(k=0;k<n;k++){
        scanf("%hhd",&ary[k]);
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
            printf("*Ascending order of an elements in an array\n*");    
            for(k=0;k<n;k++){
                printf("*%d*\n",ary[k]);
      } 
           printf("Size of an array:%ld\n",sizeof(ary));       
}  



#include<stdio.h>
int main()
{
int i,j,k,n,temp,sum,lable;
printf("*sorting elements by using Insertion sort*\n");
printf("Enter any number of elements in the array:");
scanf("%d\n",&n);
int ary[n];
for(k=0;k<n;k++){
        scanf("%d",&ary[k]);
      }
      for(i=1;i<n;i++){
              for(j=i;j>=1;j--){
                if(ary[j-1]>ary[j]){
                     temp=ary[j-1];
                     ary[j-1]=ary[j];
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
 int i,n,flag=0;
 scanf("%d",&n);
 char str[n];
 printf("Enter any string:");
 scanf("%s",str);
 int len=strlen(str)
 for(i=0;i<len/2;i++){
     if(str[i]!=str[len-i-1]){
       flag=1;
       break;
     }
 }
 if(flag==0){
       printf("String is palindrome!\n");
 }
 else {
    printf("String is not palindrome!\n");
   }
   return 0;
}

#include<stdio.h>
int main()
{
int n,k,i,j,N,p,count_l1;
int L[100];
int L1[100];
scanf("%d",&n);
N=n;
printf("Enter array elements:");
for(i=0;i<n;i++){
        scanf("%d",&L[i]);
      }
      printf("Enter any number:");
      scanf("%d",&k);
      count_l1=0;
      p=k-1;
      label1:
      i=0;
      while(i<n)
      {
         if(i==p){
            L1[count_l1]=L[i];
            count_l1=count_l1+1;
            j=p;
            while(j<n-1){
                 L[j]=L[j+1];
                 j++;   
             }
             n--;
             i=i+k-1;
             if(n!=0){
               p=i%n; 
             }
             goto label1;
          }else {
             i++;
           }
         }
         for(i=0; i<N; i++){
               printf("%d \n",L1[i]);
       }
       return 0;
   }

#include<stdio.h>
#include<string.h>
int main()
{
 int i=0,n,flag=1,len,len1;
 scanf("%d",&n);
 char str[n],str1[n];
 printf("Enter any string:");
 scanf("%s",str);
  printf("Enter any string:");
 scanf("%s",str1);
 while(str[i]!='\0' && str1[i]!='\0'){
   if(str[i]!=str1[i]){
         flag=0;
         break;
   }
}
if(flag==1){
   printf("%s=%s are equal/n",str,str1);
 }
 else{
    printf("%s=%s are not equal\n",str,str1);
   }
    return 0;
 }


#include<stdio.h>
#include<string.h>
int main()
{
 int i=0,n,flag=1,len,len1;
 scanf("%d",&n);
 char str[n],str1[n];
 printf("Enter any string:");
 scanf("%s",str);
  printf("Enter any string:");
 scanf("%s",str1);
 printf("Berfore str and str1=%s %s\n",str,str1);
 while(str[i]!='\0'){
       str1[i]=str[i];
       i++;
   }
   str1[i]='\0';
   printf("After str and str1=%s %s and lenth=%d\n",str,str1,i);
    return 0;
 }




#include<stdio.h>
int main()
{
int i,j,k,n,temp,sum,lable;
printf("*sorting elements by using Bubble sort universal *\n");
printf("Enter any number of elements in the array:");
scanf("%d\n",&n);
int ary[n];
for(k=0;k<n;k++){
        scanf("%d",&ary[k]);
      }
      for(i=0;i<n;i++){
              for(j=0;j<n-i-1;j++){
                if(ary[j]<ary[j+1]){
                     temp=ary[j];
                     ary[j]=ary[j+1];
                     ary[j+1]=temp;    
                }       
           } 
       }
       printf("@After sorting array@\n");
       for(int l=0; l<n; l++ ){       
           printf("%d\n",ary[l]);  
       }
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


#include <stdio.h>
#include <string.h>
int main() {
    char rnu[100];
    int dec = 0;
    int values[100];
    int i, j, label, len;
    printf("Enter a Roman numeral: ");
    scanf("%s", rnu);
    len=strlen(rnu); 
    for(i=0; i<len; i++) {
        if(rnu[i]== 'I'){
           values[i]= 1;
        } else if(rnu[i]=='V'){
             values[i]=5;
        } else if(rnu[i]=='X'){
             values[i]=10;
        } else if(rnu[i]=='L'){
             values[i]='5';
        } else if(rnu[i]=='V'){
             values[i]=50;
        } else if(rnu[i]=='c'){
             values[i]=100;
        } else if(rnu[i]=='D'){
             values[i]=500;
        } else if(rnu[i]=='M'){
             values[i]=1000;
        } else {
           printf("Invalid Roman Numeral.\n"); 
           return 0;
        }
       }
         goto label;
   label:
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




#include<stdio.h>
int main()
{
int i,j,k,l,rn,cn,ch;
printf("*perform arithmetic operation the elements of an array*\n");
printf("Enter the number of rows in an array:");
scanf("%d",&rn);
printf("Enter the number of coloumns in an rows:");
scanf("%d",&cn);
char ary[rn][cn];
printf("Enter the elements of 2D array1:");
for(k=0;k<rn;k++){
       for(l=0;l<cn;l++){
            scanf("%hhd\n",&ary[k][l]);
         }
      }
      for(k=0;k<rn;k++){
       for(l=0;l<cn;l++){
            printf("%d ",ary[k][l]);
       }
       printf("\n");
      }
      return 0;     
   } 


#include<stdio.h>
int main()
{
    int i,j,k,n,temp,a;
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
    int up=n-1;
    int lr=0;
    while(lr<=up){
         int mid=lr+(up-lr)/2;
         if(ary[mid]==a){
              printf("Element found at index:%d\n",mid);
              return 0;
         }
         else if(ary[mid]<a){
                lr=mid+1;
         }   
         else {
              up=mid-1;
         }
    }
    printf("Element not found in Array\n");
    return 0;
} 
         
*/


  
printf("Rotationally array problem 3...")
#include<stdio.h>
int main()
{
int n,k,i,j,N,p,count_l1;
int L[100];
int L1[100];
scanf("%d",&n);
N=n;
printf("Enter array elements:");
for(i=0;i<n;i++){
        scanf("%d",&L[i]);
      }
      printf("Enter any number:");
      scanf("%d",&k);
      count_l1=0;
      p=k-1;
      label1:
      i=0;
      while(i<n)
      {
         if(i==p){
            L1[count_l1]=L[i];
            count_l1=count_l1+1;
            j=p;
            while(j<n-1){
                 L[j]=L[j+1];
                 j++;   
             }
             n--;
             i=i+k-1;
             if(n!=0){
               p=i%n; 
             }
             goto label1;
          }else {
             i++;
           }
         }
         for(i=0; i<N; i++){
               printf("%d \n",L1[i]);
       }
       return 0;
   }
