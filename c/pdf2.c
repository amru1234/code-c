#include<stdio.h>
int main()
{ 
  int marks;
  
  printf("enter marks: ");
  scanf("%d",&marks);
  
  if (marks<=100)
  {
    if (marks>=90)
    {
    	printf("grade x");
    
    }
    else if(marks>=75)
    {
    
    	printf("grade A\n");
    }
  
    else if (marks>=65)
    {
    
    	printf("grade B\n");
    }
    else if (marks>=45)
    {
       printf("grade c\n");
    
    }
    else
    {
    	if (marks>=0)
    	{
    		printf("fail\n");
    	}
    	else
    	{
    		printf("number is less than 0\n");
    	}
    }  
 }
 else
 {
 	printf("number is greater than 100\n");
 
 }
 
 }
