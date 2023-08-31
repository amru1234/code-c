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
    
    
printf("*Addition of two matrices*\n");   
char res[2][3]={{0,0,0},{0,0,0}};
char on[2][3]={{11,12,13},{14,15,16}};
 for(i=0;i<2;i++){
      for(j=0;j<3;j++){
           res[i][j]=op[i][j]+on[i][j];
          }
      }
  for(i=0;i<2;i++){
      for(j=0;j<3;j++){
           printf("array[%d][%d]=%d\n",i,j,res[i][j]);
          }
       }
 
       
printf("*Substraction of two matrices also having change element of a position an array*\n");
for(i=0;i<2;i++){
      for(j=0;j<3;j++){
           res[i][j]=on[i][j]-op[i][j];
          }
 }
 res[1][0]=5;
 for(i=0;i<2;i++){
      for(j=0;j<3;j++){
           printf("%d\n",res[i][j]);
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


printf("*Copying the elements of an array to another array*\n");

char arr1[20],dash1[20];
printf("Enter the array elements :");
  for (i=0; i<6; i++) {
    scanf("%hhd", &arr1[i]);
  }
for(i=0;i<6;i++){
        dash1[i]=arr1[i];
        printf("dash1[%d]=%d\n",i,dash1[i]);

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
 

printf("*Inserting element an array at give position*\n");
char ary[6]={4,8,9,6,7};
int a=5,k,m=0,n3,n4;
printf("Enter inserted Element:\n");
scanf("%d",&n3);
printf("Enter number of a position which is Element to be inserted:");
scanf("%d",&n4);
for(k=a+1;k>=n4;k--){
        ary[k]=ary[k-1];
      }
       {
       ary[n4]=n3;
       a=a+1;
    }
       while(m<a+1){
           printf("%d\n",ary[m]);
           m++;
          }
 }
 
 
 #include<stdio.h>
int main()
{
char ary[20];
int i,k,n,max;
printf("*maximum elements of an array*\n");
printf("Enter number of elements in the array:");
scanf("%d",&n);
printf("Enter the elements:");
for(k=0;k<n;k++){
        scanf("%hhd",&ary[k]);
      }
      max=ary[0];
      
      for(i=1;i<n;i++){
                if(ary[i]>max){
                     max=ary[i];
               }
           }   
           printf("maximum element of an array:%d\n",max);   
           printf("Size of an array:%ld\n",sizeof(ary));       
}       

#include<stdio.h>
int main()
{
char ary[20];
int i,k,n,min;
printf("*maximum elements of an array*\n");
printf("Enter number of elements in the array:");
scanf("%d",&n);
printf("Enter the elements:");
for(k=0;k<n;k++){
        scanf("%hhd",&ary[k]);
      }
      min=ary[0];
      
      for(i=1;i<n;i++){
                if(ary[i]<min){
                     min=ary[i];
               }
           }   
           printf("minimum element of an array:%d\n",min);   
           printf("Size of an array:%ld\n",sizeof(ary));       
}
          
#include<stdio.h>
int main()
{
char ary[5];
int k,avg,sum=0;
printf("*maximum elements of an array*\n");
printf("Enter the elements:");
for(k=0;k<5;k++){
        scanf("%hhd\n",&ary[k]);
        sum=sum+ary[k];
      }
        avg=sum/5;
        printf("sum  and average of all elements:%d %d\n",sum,avg);   
        printf("Size of an array:%ld\n",sizeof(ary));       
} 


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
                if(ary[i]<ary[j]){
                     temp=ary[j];
                     ary[j]=ary[i];
                     ary[i]=temp;
                     
                }
                
           } 
       }        
            printf("*descending order of an elements in an array*\n");    
            for(k=0;k<n;k++){
                printf("*%d*\n",ary[k]);
      } 
           printf("Size of an array:%ld\n",sizeof(ary));       
}

#include<stdio.h>
int main()
{
printf("*Deleting element an array at give position*\n");
char ary[6]={4,8,9,6,7};
int a=5,k,m=0,n3,n;
printf("Enter position  of a Deleted Element:\n");
scanf("%d",&n);
n3=sizeof(ary);
if(n>=n3+1){
     printf("Deletion is not possible in the array\n");
     }
     else{
    for(k=n-1;k<n3;k++){
         ary[k]=ary[k+1];
      }
      for(k=0;k<n3;k++){
          printf("*%d*\n",ary[k]);
      }   
       printf("Size of an array:%ld\n",sizeof(ary));
   }      
}

#include<stdio.h>
int main()
{
char ary[20];
int i,k,n,cp=0,cn=0,ce=0;
printf("*Sorting elements of an array*\n");
printf("Enter number of elements in the array:");
scanf("%d",&n);
printf("Enter the elements:");
for(k=0;k<n;k++){
        scanf("%hhd",&ary[k]);
      }
      for(i=0;i<n;i++){
          if(ary[i]>0){
              cp=cp+1;
          }
            else if(ary[i]<0){
               cn=cn+1;
           }
            else if(ary[i]==0){
               ce=ce+1;
           } 
       }        
            printf("Total positive elements in an array:%d\n",cp);  
            printf("Total negative elements in an array:%d\n",cn);    
            printf("total elments are equal to the 0:%d\n",ce); 
            printf("Size of an array:%ld\n",sizeof(ary));       
}          


#include<stdio.h>
int main()
{
char ary[20],map[20],res[20];
int i,k,n,ch;
printf("*perform arithmetic operation the elements of an array*\n");
printf("Enter number of elements in the array:");
scanf("%d",&n);
printf("Enter the elements:");
for(k=0;k<n;k++){
        scanf("%hhd",&ary[k]);
      }
      printf("Enter the elements:");
            for(k=0;k<n;k++){
              scanf("%hhd",&map[k]);
      }
      printf("Enter any choice no between 1 to 4 to perform an operation as you want:");
      scanf("%d",&ch);
      if(ch==1){
           for(i=0;i<n;i++){
              res[i]=ary[i]+map[i];
              printf("Addition of two elements,ary[i]+map[i]:%d\n",res[i]);
            }
        }
       else if(ch==2){
            for(i=0;i<n;i++){
              res[i]=ary[i]-map[i];
              printf("Substraction of two elements,ary[i]-map[i]:%d\n",res[i]);
            }
          }         
        else if(ch==3){
             for(i=0;i<n;i++){
              res[i]=ary[i]*map[i];
              printf("Multiplication of two elements,ary[i]*map[i]:%d\n",res[i]);
            }
          }         
        else if(ch==4){
             for(i=0;i<n;i++){
                res[i]=ary[i]/map[i];
                printf("Division of two elements,ary[i]/map[i]:%d\n",res[i]);
              }
           }
         else
         printf("Invalid choice number\n");
} 

  
#include<stdio.h>
int main()
{
char ary[2][2],map[2][2],res[2][2];
int i,j,k,l,rn,cn,ch;
printf("*perform arithmetic operation the elements of an array*\n");
printf("Enter the number of rows in an array:");
scanf("%d",&rn);
printf("Enter the number of coloumns in an rows:");
scanf("%d",&cn);
printf("Enter the elements of 2D array1:");
for(k=0;k<rn;k++){
       for(l=0;l<cn;l++){
            scanf("%hhd/n",&ary[k][l]);
         }
      }
printf("Enter the elements 2D array2:");
for(k=0;k<rn;k++){
       for(l=0;l<cn;l++){
            scanf("%hhd/n",&map[k][l]);
         }
      }
printf("Enter any choice no between 1 to 4 to perform operation as you want:");
scanf("%d",&ch);
if(ch==1){
    for(k=0;k<rn;k++){
       for(l=0;l<cn;l++){
            res[k][j]=ary[k][j]+map[k][j];
           printf("Addition of two elements,ary[k][j]+map[k][j]:%d\n",res[k][j]);
       }
     }
   }
     else if(ch==2){
            for(k=0;k<rn;k++){
                   for(l=0;l<cn;l++){
                   res[k][j]=ary[k][j]-map[k][j];
                   printf("Substraction of two elements,ary[k][j]+map[k][j]:%d\n",res[k][j]);                 
            }
          } 
       }        
        else if(ch==3){
                 for(k=0;k<rn;k++){
                     for(l=0;l<cn;l++){
                         res[k][j]=ary[k][j]*map[k][j];
                         printf("Multiplication of two elements,ary[k][j]+map[k][j]:%d\n",res[k][j]);
            }
          }
        }         
        else if(ch==4){
                 for(k=0;k<rn;k++){
                        for(l=0;l<cn;l++){
                              res[k][j]=ary[k][j]/map[k][j];
                              printf("Division of two elements,ary[k][j]+map[k][j]:%d\n",res[k][j]);
              }
           }
         }
         else
         printf("Invalid choice number\n");
} 
            
#include<stdio.h>
int main()
{
char ary[2][2],map[2][2],res[2][2];
int i,j,k,l,rn,cn,ch;
printf("*perform arithmetic operation the elements of an array*\n");
printf("Enter the number of rows in an array:");
scanf("%d",&rn);
printf("Enter the number of coloumns in an rows:");
scanf("%d",&cn);
printf("Enter the elements of 2D array1:");
for(k=0;k<rn;k++){
       for(l=0;l<cn;l++){
            scanf("%hhd/n",&ary[k][l]);
         }
      }
printf("Enter the elements 2D array2:");
for(k=0;k<rn;k++){
       for(l=0;l<cn;l++){
            scanf("%hhd/n",&map[k][l]);
         }
      }
printf("Enter any choice no between 1 to 4:");
scanf("%d",&ch);
if(ch==1){
    for(k=0;k<rn;k++){
       for(l=0;l<cn;l++){
            res[k][j]=ary[k][j]+map[k][j];
           printf("Addition of two elements,ary[k][j]+map[k][j]:%d\n",res[k][j]);
       }
     }
   }
     else if(ch==2){
            for(k=0;k<rn;k++){
                   for(l=0;l<cn;l++){
                   res[k][j]=ary[k][j]-map[k][j];
                   printf("Substraction of two elements,ary[k][j]+map[k][j]:%d\n",res[k][j]);                 
            }
          } 
       }        
        else if(ch==3){
                 for(k=0;k<rn;k++){
                     for(l=0;l<cn;l++){
                         res[k][j]=ary[k][j]*map[k][j];
                         printf("Multiplication of two elements,ary[k][j]+map[k][j]:%d\n",res[k][j]);
            }
          }
        }         
        else if(ch==4){
                 for(k=0;k<rn;k++){
                        for(l=0;l<cn;l++){
                              res[k][j]=ary[k][j]/map[k][j];
                              printf("Division of two elements,ary[k][j]+map[k][j]:%d\n",res[k][j]);
              }
           }
         }
         else
         printf("Invalid choice number\n");
} 
     

#include<stdio.h>
int main()
{
 char ary[10],c;
 int i,a;
 printf("Enter any nuber of character as you want:");
 scanf("%d",&a);
 printf("Enter character in lowercase:");
 for(i=0;i<a;i++){
    scanf("%c\n",&c);
    ary[i]=c-32;
   }
   scanf("%hhd",&ary[10]);
   i=0;
   while(i<a){
      printf("after coverted character%c\n",ary[i]);
      i++;
   }
}


#include<stdio.h>
void main()
{
 char ary[10],c;
 int i,j,a;
 printf("Enter any nuber of character as you want:");
 scanf("%d",&a);
 printf("Enter character in lowercase:");
 for(i=0;i<a;i++){
    scanf("%c\n",&ary[i]);
   }
   j=0;
   while(j<a){
      j++;
   }
   printf("Total length of an a string is:%d\n",i);
}

 
#include<stdio.h>
void main()
{
char s[]="Welcome Amruta Bagde";
int i;
for(i=0; s[i]!='\0'; i++){
    }
  }
       
#include<stdio.h>
#include<string.h>
void main()
{
 int str[20],str1[20];
 int i,j;
 printf("Enter any string1 as you want:");
 scanf("%s",str);
 printf("Enter any string2 as you want:");
 scanf("%s",str1);
 i=strlen(str);
 j=strlen(str1);
 if(i>j){
     printf("long string are str[%s] which have length:%d",str,i);
   }
   else if(j>i){
       printf("long string are str1[%s] which have length:%d",str1,j);
      }
   else{
      printf("both of the strings are equal str[%s]==str[%s] which have length:%d\n",i,j);
   }
 }  
 
 
 #include<stdio.h>
#include<string.h>
int main()
{
printf("*We Display Duplicate Elements of an array\n");
char aree[6];
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


#include<string.h>
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
int i,j,k,n,temp,a;
printf("*median of two sorted list*\n");
printf("Enter number of elements in the array1 and array2:");
scanf("%d\n%d",&n,&a);
int ary[n],ary1[a];
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
       printf("Enter the elements:");
            for(k=0;k<a;k++){
              scanf("%d",&ary1[k]);
      }
      for(i=0;i<a;i++){
              for(j=i+1;j<a;j++){
                if(ary1[i]>ary1[j]){
                     temp=ary1[i];
                     ary1[i]=ary1[j];
                     ary1[j]=temp;                   
                }
           } 
       
       }
       int c,d,b,ary3[n+a];
       for(c=1;c<=2;c++){
          if(c==1){
           for(d=0; d<n; d++){
               ary3[n+a]=ary[d];
           }
          }
          for(b=0; b<a; b++){
               ary3[n+a]=ary1[b];
        }
       }
       for(i=0;i<n;i++){
              for(j=i+1;j<sizeof(ary3);j++){
                if(ary3[i]>ary3[j]){
                     temp=ary3[i];
                     ary3[i]=ary3[j];
                     ary3[j]=temp;                   
                }
           } 
       
       }
       int median=sizeof(ary3)/2;
       printf("%d\n",ary3[median]);
       return 0;
   }
       
  #include<stdio.h>
int main()
{
int i,j,k,n,temp,a;
printf("*median of two sorted list*\n");
printf("Enter number of elements in the array1 and array2:");
scanf("%d\n%d",&n,&a);
int ary[n],ary1[a];
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
       printf("Enter the elements:");
            for(k=0;k<a;k++){
              scanf("%d",&ary1[k]);
      }
      for(i=0;i<a;i++){
              for(j=i+1;j<a;j++){
                if(ary1[i]>ary1[j]){
                     temp=ary1[i];
                     ary1[i]=ary1[j];
                     ary1[j]=temp;                   
                }
           } 
       
       }
       int l=0;
       int c,d,b,ary3[n+a];
       for(c=1;c<=2;c++){
          if(c==1){
           for(d=0; d<n; d++){
               ary3[l]=ary[d];
               l=l+1;
           }
          }
          for(b=0; b<a; b++){
               ary3[l]=ary1[b];
               l=l+1;
        }
       }
       for(int m=0;m<sizeof(ary3);m++){
              for(int n=m+1;n<sizeof(ary3);n++){
                if(ary3[m]>ary3[n]){
                     temp=ary3[m];
                     ary3[m]=ary3[n];
                     ary3[n]=temp;                   
                }
           } 
       
       }
       for(j=0;j<n+a;j++){
           printf("%d\n",ary3[j]);
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
    int lw=0;
    int hi=n-1;
    int mid;

    while(lw<=hi){
        mid=lw+(hi-lw)/2;
        if(ary[mid]==a) {
            printf("Element found at index:%d\n", mid);
            return 0;
        }
        else if(ary[mid]<a) {
            lw=mid+1;
        }
        else {
            hi=mid-1;
        }
    }

    printf("Element not found\n");
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

/*
#include<stdio.h>
int main()
{
int i,j,k,n,temp,sum,lable;
printf("*rotationally elements print*\n");
printf("Enter number of elements in the array:");
scanf("%d\n",&n);
int ary[n];
for(k=0;k<n;k++){
        scanf("%d",&ary[k]);
      }
      for(i=0;i<n;i++){
              for(j=	i+1;j<n;j++){
                if(ary[i]>ary[j]){
                     temp=ary[i];
                     ary[i]=ary[j];
                     ary[j]=temp;    
                }       
           } 
       }  
       printf("Enter the elements:");
       scanf("%d",&sum);
       int f=0,lr=0;
            while(lr<n){
                int up=lr+1;
                while(up<n){
                   if(ary[lr]+ary[up]==sum){
                      f=f+1;
                      if(f==1){
                        printf("%d %d",ary[lr],ary[up]);
                        break;
                      }
                      up++;
                      lr=up-1;
                   }
                   up=up+1;
                   lr=up-1;
            }
            lr++;
       }
       return 0;
   }
   
//#Acurate run program
 #include<stdio.h>
int main()
{
int i=0,j,k,n,temp,sum,lable;
printf("*rotationally elements print*\n");
printf("Enter number of elements in the array:");
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
       printf("Enter the elements:");
       scanf("%d",&sum);
       int s=0;
       for(i=0; i<=n; i++){
          for(j=i+1; j<n; j++){
              s=ary[i]+ary[j];
              if(sum==s){
                  printf("%d %d\n",ary[j],ary[i]);
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
int i,j,k,n,temp,sum,lable;
printf("*sorting elements by using Bubble sort*\n");
printf("Enter any number of elements in the array:");
scanf("%d\n",&n);
int ary[n];
for(k=0;k<n;k++){
        scanf("%d",&ary[k]);
      }
      for(i=n-2;i>=0;i--){
              for(j=0;j<=i;j++){
                if(ary[j]>ary[j+1]){
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



  
#include<stdio.h>
#include<string.h>
int main()
{
 int i,n,flag=0,len,len1;
 scanf("%d",&n);
 char str[n],str1[n];
 printf("Enter any two strings:");
 scanf("%s %s",str,str1);
 len=strlen(str);
 len1=strlen(str1);
 if(len>len1){
       printf("String %s is longer\n",str);
 }
 else if(len1>len){
    printf("String %s is longer\n",str1);
   } else {
      printf("String %s=%s is equal longer\n",str,str1);
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
printf("change value in an 2D array.")
int n,b,i,j,c,v;
scanf("%d",&n);
scanf("%d",&b);
int arr[n][b];
for(i=0;i<n;i++){
    for(j=0;j<b;j++){
       scanf("%d\n",arr[i][j]);
       }
      }
      printf("Enter which element as you want change:");
      scanf("%d",&c);
      printf("Enter replacing value:");
      scanf("%d",&v);
      for(i=0;i<n;i++){
            for(j=0;j<b;j++){
              if(arr[i][j]==c){
                   arr[i][j]=v;
              }
            }
         }
         for(i=0;i<n;i++){
              for(j=0;j<b;j++){
                  printf("%d\n",arr[i][j]);
                }
             }
         return 0;
  }




#include<stdio.h>
int main()
{
int i,j,k,n,temp,sum,lable;
printf("*sorting elements by using selection sort*\n");
printf("Enter any number of elements in the array:");
scanf("%d",&n);
int ary[n];
printf("Enter Elements:\n");
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
       printf("Enter Elements:\n");
       int ary1[n];
       for(k=0;k<n;k++){
              scanf("\n%d",&ary1[k]);
        }
        for(i=0;i<n;i++){
              for(j=i+1;j<n;j++){
                if(ary1[i]>ary1[j]){
                     temp=ary1[i];
                     ary1[i]=ary1[j];
                     ary1[j]=temp;    
                }       
           } 
       }
       int b=0;
       int u[b];
       i=0;
       while(i<2){
             if(i==0){
                j=0;
                while(j<sizeof(ary)){
                  for(int k=0; k<sizeof(u); k++){
                   if(ary[j]==u[k]){
                   }
                   u[b]=ary[j];
                   b++;
                   j++;
                 }
                 j++;
                }
                i++;
              }
              for(j=0;j<n;j++){
                  for(int k=0; k<sizeof(u); k++);
                   if(ary1[j]==u[k]){
                   }
                   u[b]=ary1[j];
                   b++;
               }
               i++;
             }
             printf("union elements in an array:\n");

             for(int x=0;x<b+1;x++){
                   printf("%d ",u[x]);
            }
             printf("\nIntersection elements of an array:\n");
             int l=0,inter[l];
             for(i=0; i<n; i++){
                int c=1;
                for(j=0; j<n; j++){
                      if(ary[i]==ary1[j]){
                          c++;
                     }
               }
               if(c>1){
                 printf("%d ",ary[i]);
               }
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



#include <stdio.h>
int main() {
  int marks[3][2];
  int Tm= 0;
  for (int i = 0; i < 3; i++) {
    printf("Enter marks for Test %d: ", i+1);
    scanf("%d", &marks[i][0]);
    marks[i][1] = 0;
  }
  if (marks[0][0] > marks[1][0]) {
    marks[0][1] = 1;
  } else {
    marks[1][1] = 1;
  }
  for (int i = 0; i < 3; i++) {
    if (marks[i][1] == 1) {
      Tm=Tm+marks[i][0];
    }
  }
  Tm=Tm+marks[2][0];
  int percentage = Tm * 2;
  char grade;
  if (percentage >= 80) {
    grade = 'A';
  } else if (percentage >= 70) {
    grade = 'B';
  } else if (percentage >= 60) {
    grade = 'C';
  } else if (percen-tage >= 50) {
    grade = 'D';
  } else {
    grade = 'F';
  }
  printf("Final Score: %d\n", Tm);
  printf("Grade: %c\n", grade);

  return 0;
}




 */
