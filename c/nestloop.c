 /*
 #include<stdio.h>
 int main()
 {
 int i=1,n;
 printf("Enter any number:");
 scanf("%d" ,&n);
 while(i<=n){
     for(int j=1;j<=i;j++){
        printf("%d",j);
     }
     printf("\n");
     i=i+1;
    }
 }

 

 #include<stdio.h>
 int main()
 {
 int i=1,n;
 printf("Enter any number:");
 scanf("%d" ,&n);
 while(i<=n){
     for(int j=5;j>=i;j--){
        printf("%d",j);
     }
     printf("\n");
     i=i+1;
    }
 }

 #include<stdio.h>
 int main()
 {
 int i=1,n;
 printf("Enter any number:");
 scanf("%d" ,&n);
 while(i<=n){
     for(int j=1; j<=i;j++){
        printf("%d",((n-i)+1));
     }
     printf("\n");
     i=i+1;
    }
 }


 #include<stdio.h>
 int main()
 {
 int i=1,n,k;
 printf("Enter any number:");
 scanf("%d" ,&n);
 while(i<=n){
     for(int j=4;j>=i;j--){
        printf(" ");
     }
     for(k=1;k<=i;k++){
        printf("%d",k);
     }
     printf("\n");
     i=i+1;
    }
 }


#include<stdio.h>
 int main()
 {
 int i=1,n;
 printf("Enter any number:");
 scanf("%d" ,&n);
 while(i<=n){
     for(int j=1;j<=n;j++){
        printf("*");
     }
     printf("\n");
     i=i+1;
    }
 }


#include<stdio.h>
 int main()
 {
 int i=1,n;
 printf("Enter any number:");
 scanf("%d" ,&n);
 while(i<=n){
     for(int j=i;j<=n;j++){
        printf("*");
     }
     printf("\n");
     i=i+1;
    }
 }
 
 
 #include<stdio.h>
 int main()
 {
 int i=1,n;
 printf("Enter any number:");
 scanf("%d" ,&n);
 while(i<=n){
     for(int j=i;j<=n;j++){
        printf("%d",i);
     }
     printf("\n");
     i=i+1;
    }
 }


#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
while(n<=10){
  for(int i=1;i<=4;i++){
     for(int j=1; j<=i; j++){
         printf("%d ",n);
         n=n+1;
     }
     printf("\n");
    }
  }
  return 0;
}


#include<stdio.h>
int main()
{
int i=1,a=5,n;
scanf("%d",&n);
while(i<=n){
     for(int j=1; j<=a; j++){
         printf("%d ",j);
     }
     printf("\n");
     i=i+1;
    }
    return 0;
  }
  
#include<stdio.h>
#include<math.h>
int main()
{
int i=1,n,a=1;
scanf("%d",&n);
while(i<=n){
     for(int j=1; j<=i; j++){
         printf("%d ",a*a);
     }
     printf("\n");
     a=a+1;
     i=i+1;
    }
  return 0;
}


/*
#include<stdio.h>
int main()
{
int i=1,n;
scanf("%d",&n);
while(i<=n){
     for(int j=1; j<=i; j++){
         if(j==1 || j==i || i==n){
              printf("*");
         }	
         else
           printf(" ");
     }
     printf("\n");
     i=i+1;
  }
  return 0;
}

#include<stdio.h>
int main()
{
int i=1,n;
scanf("%d",&n);
while(i<=n){
     for(int j=i; j<=n; j++){
               printf(" ");
           }
           for(int k=1; k<2*i; k++){
                if(k==1 || k==2*i-1 || i==n){
                     printf("*");
                 }
                 else
                    printf(" ");
                }
          printf("\n");
          i=i+1;
     }
     return 0;
}


#include<stdio.h>
int main()
{
int i=1,r,j=1,c,k;
printf("Enter the number of rows:");
scanf("%d",&r);
printf("Enter the number of columns:");
scanf("%d",&c);
while(i<=r){
     while(j<=i){
         printf(" ");
     }
     for(k=1; k<=c; k++){
        if(k==1 || k==r || k==1 ||   k==c){
              printf("*");
         }
         else
           printf(" ");
        }
     printf("\n");
     i=i+1;
  }
  return 0;
}

#include<stdio.h>
int main()
{
int n,i=1,k;
scanf("%d",&n);
while(i<=n){
    if(i==1 || i==n){
       int j;
       for(j=1;j<=n;j++){
             printf("*");
             j=j+1;
       }
       printf("\n");
       i++;
     }else{
       for(k=1;k<=n;k++){
           if(k==1 || k==n){
              printf("*");
           } else{
              printf(" ");
         }
     }
     printf("\n");
     i++;
   }
  }
  return 0;
}

#include<stdio.h>
int main()
{
int n,i,k=1;
scanf("%d",&n);
for(i=1;i<=n;i++){
       int j=1;
       for(j=1;j<=n;j++){
          while(j<=k){
             printf("%d ",k);
             j=j+1;
          } if(k==n){
                  break;
               }
           printf("%d ",j);
       }
        printf("\n");
        k=k+1;
    }
     return 0;
 }
           
#include<stdio.h>
int main()
{
int n,i,k=2,j=1;
scanf("%d",&n);
printf("%d\n",0);
for(i=2;i<=n;i++){
       int j=1;
       while(j<=i){
          if(j==1){
             printf("%d ",k);
             j++;
          } 
          printf("%d ",k*2);
          j++;
       }
        printf("\n");
        k=k*2;
    }
     return 0;
 }

#include<stdio.h>
int main()
{
int n,i,k=1,j=1;
scanf("%d",&n);
for(i=1;i<=n;i++){
       for(j=1;j<=10-i;j++){
             printf("*");
          } 
          for(int k=1;k<=i;k++){
                 printf(" ");
             }
             printf("\n");
          }
          int a=1;
          for(i=i-1;i>=1;i=i-1){
              for(j=1;j<=a;j++){
                   printf("* ");
                }
                for(k=1;k<=i;k++){
                     printf(" ");
                   }
                 printf("\n");
                 a=a+1;
           }
           return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
char str[10]="PYTHON";
int i=0;
while(i<strlen(str)){
        int j=0;
       while(j<=i){
             printf("%c",str[j]);
             j=j+1;
          }
          printf("\n");
          i=i+1;
        }
      return 0;
 }
 

 #include<stdio.h>
#include<string.h>
int main()
{
char str[10]="NIDHI";
int i,j;
for(i=0;i<strlen(str);i++){
       for(j=0;j<=i;j++){
             printf("%c",str[j]);
          }
          printf("\n");
        }
      return 0;
 }


#include<stdio.h>
int main()
{
int n,i,j,a=1;
scanf("%d",&n);
for(i=1;i<=n;i++){
       for(j=1;j<=n-i;j++){
             printf(" ");
          } 
          for(int k=1;k<=a;k++){
                 printf("%d",i);
             }
             printf("\n");
             a=a+2;
        }
        return 0;
}



#include<stdio.h>
int main()
{
int k,n,i,j,a=1;
scanf("%d",&n);
for(i=1;i<=n;i++){
       for(j=4;j>=i;j--){
             printf(" ");
          } 
          for(int k=1;k<=i;k++){
                 printf("%d",k);
             }
             for(int l=k-1;l>=1;l--){
                  printf("%d",l);
             }
             printf("\n");
        }
        return 0;
}



#include<stdio.h>
int main()
{
int a=1,i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++){
       for(j=1;j<=i;j++){
             printf("%d",a);
             a=a+1;
          } 
          printf("\n");
      }
      return 0;
}


#include<stdio.h>
int main()
{
int n,i=1;
scanf("%d",&n);
while(i<=n){
     if(i==1 || i==n)    {     
          for(int j=1; j<=n; j++){
                printf("%d",i);
                
           }
           printf("\n");
           i++;
           if(i==n+1){
               break;
         }
      } 
       for(int j=1; j<=n; j++){
                if(j==1 || j==n){
                   printf("%d",i);
                 }else {
                   printf(" ");
             }
           }
           printf("\n");
           i++;
      }
     return 0;
}


#include<stdio.h>
int main()
{
int n,i=1,k;
scanf("%d",&n);
while(i<=n){     
     for(int j=i; j<=n; j++){
            printf(" ");
        }
       for(k=1; k<2*i; k++){
                if(i==n|| k==1 || k==2*i-1){
                   printf("*");
                 }else {
                   printf(" ");
             }
           }
           printf("\n");
           i++;
      }
     return 0;
}


#include<stdio.h>
int main()
{
int n,i=0;
scanf("%d",&n);
while(i<n){     
     for(int j=0; j<n; j++){
         if(i==j|| i+j==n-1){
                   printf("*");
                 }else {
                   printf(" ");
             }
           }
           printf("\n");
           i++;
      }
     return 0;
}

#include<stdio.h>
int main()
{
int R,i=1;
scanf("%d",&R);
while(i<=R){ 
       int j=1;    
     while(j<=R-i){
             printf(" ");
             j++;
        }
        for(int k=1; k<=i; k++){
                printf("%d",k);
           }
           for(int l=i-1; l>=1; l--){
                     printf("%d",l);
           }
           printf("\n");
           i++;
      }
     return 0;
}


#include<stdio.h>
int main()
{
int N,i=65;
scanf("%d",&N);
while(i<N+1){ 
       int j=65;    
     while(j<i+1){
             char c =(char)(i);
             printf("%c ",c);
             j++;
        }
        printf("\n");
        i++;
      }
     return 0;
}

#include<stdio.h>
int main()
{
int N,i=65;
scanf("%d",&N);
while(i<N+1){ 
     int j=65;  
     while(j<i+1){
             char c =(char)(j);
             printf("%c ",c);
             j++;
        }
        printf("\n");
        i++;
      }
     return 0;
}


#include<stdio.h>
int main()
{
int N,i=1,a=65;
scanf("%d",&N);
while(i<N+1){ 
     int j=1;  
     while(j<i+1){
             char c =(char)(a);
             printf("%c ",c);
             a++;
             j++;
        }
        printf("\n");
        i++;
      }
     return 0;
 }

 
 
#include<stdio.h>
int main()
{
int R,i=1;
scanf("%d",&R);
while(i<=R){ 
       int j=1;    
     while(j<=R-i){
             printf(" ");
             j++;
        }
        for(int k=1; k<=i; k++){
                printf("%d",k);
           }
           for(int l=i-1; l>=1; l--){
                     printf("%d",l);
           }
           printf("\n");
           i++;
      }
      return 0;
}
 



#include<stdio.h>
int main()
{
int R,i=1;
scanf("%d",&R);
while(i<=R){ 
       int j=1;    
     while(j<=i){
             printf("%d",j);
             j++;
        }
        for(int k=i-1; k>=1; k--){
                printf("%d",k);
           }
           printf("\n");
           i++;
      }
     return 0;
 }
*/
 
#include<stdio.h>
int main()
{
int R,i=1,n=10,j=24;
scanf("%d",&R);
while(i<=R){ 
     while(j>=n){
        for(int k=1; k<=i; k++){
                printf("%d ",j);
                j=j-1; 
           }
           printf("\n");
           i++;
      }
    }
     return 0;
 }
/*
#include<stdio.h>
int main()
{
int R,i=1;
scanf("%d",&R);
while(i<=R){ 
       int j=4;    
     while(j>=i){
             printf(" ");
             j--;
        }
        for(int k=1; k<=i; k++){
                printf("%d",k);
           }
           printf("\n");
           i++;
     } 
}
int i=4;
while( i>=1){
     for(int k=4; k>=i; k--){
              printf(" ");
        }
        for(int l=1; l<=i; l++){
                printf("%d",l);
           }
           printf("\n");
           i--;
       }
       
       
       
#include<stdio.h>
int main()
{
int R,i=1;
scanf("%d",&R);
while(i<=R){ 
       int j=4;    
     while(j>=i){
             printf(" ");
             j--;
        }
        for(int k=1; k<=i; k++){
                printf("%d",k);
           }
           printf("\n");
           i++;
     } 
}
int i=4;
while( i>=1)
     for(int k=4; k>=i; k--){
              printf(" ");
        }
        for(int l=1; l<=i; l++){
                printf("%d",l);
           }
           printf("\n");
           i--;
       }


#include<stdio.h>
void main()
{
int a,b,r,p;
scanf("%d %d",&a,&b);
p=a*b;
while(b>0){
   r=b;
   b=a%b;
   a=r;
 }
 int HCF=a;
 int LCM=p/HCF;
 printf("%d %d\n",HCF,LCM);
}


#include<stdio.h>
void main()
{
int a,b,c,d,r,p,max1=0,smax1=0,max2=0,smax2=0;
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b){
    max1=a;
    smax1=b;
  } else {
    max1=b;
    smax1=a;
}
if(c>d){
    max2=c;
    smax2=d;
 } else {
    max2=d;
    smax2=c;
 }
 if(max1>max2){
     if(max2>smax1){
          printf("%d",max2);
    }
    else{
       printf("%d",smax1);
  }
 }
 else if(max1>smax2){
      printf("%d",max1);
   } else
   {
      printf("%d",smax2);
   }
}
                                                    
 
 
 #include<stdio.h>
void main()
{
int a,b,r,p;
scanf("%d %d",&a,&b);
p=a*b;
while(b>0){
   r=b;
   b=a%b;
   a=r;
 }
 int HCF=a;
 int LCM=p/HCF;
 printf("%d %d\n",HCF,LCM);
}


#include<stdio.h>
int main()
{
int n,i=1;
scanf("%d",&n);
while(i<=n){ 
    if(i==1 || i==5 || i==10){
        int j=1;    
     while(j<=5){
             printf("*");
             j++;
           }
           printf("\n");
           i++;
      }
      else if(i==2 || i==3 || i==4 || i==6 || i==7 || i==8       ||                i==9 ){
       for(int j=1; j<=5; j++){
            if(j==1 || j==5){
                printf("*");
           } else
               printf(" ");
          }
          {printf("\n");
          }
          i=i+1;
        }
     } 
     return 0;
}


#include<stdio.h>
int main()
{
    int num,orig_num,sum=0;
    int digit;
 
    printf("Enter a number \n");
    scanf("%d",&orig_num);
 
    num=orig_num;
 
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
 
    if(orig_num%sum==0)
        printf("HARSHAD NUMBER \n");
    else
        printf("NOT A HARSHAD NUMBER");
 
    return 0;
}
 */
  
 #include<stdio.h>
  int main()  
{  
    int n1, n2, min, count, flag = 1;  
  
    printf("Enter 2 positive numbers\n");  
    scanf("%d%d", &n1, &n2);  
  
    min = n1 < n2 ? n1 : n2;  
  
    for(count = 2; count <= min; count++)  
    {  
        if( n1 % count == 0 && n2 % count == 0 )  
        {  
            flag = 0;  
            break;  
        }  
    }  
  
    if(flag)  
    {  
        printf("%d and %d are co-prime\n", n1, n2);  
    }  
    else  
    {  
        printf("%d and %d are not co-prime\n", n1, n2);  
    }  
  
    return 0;  
}  																																																																																																																																																																																																																																																																																																																																															)
        


























