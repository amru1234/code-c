/*
//Read only one line.... 
#include<stdio.h>

int main()
{
  FILE *fptr;
  fptr=fopen("Bagde.txt","r");
  
  fprintf(fptr,"Amruta is a good girl\n");
  
  char myString[100];
  
  fgets(myString,100,fptr);
  
  printf("%s",myString);

  
  fclose(fptr);
  return 0;
}





//print total line of strings...in our file 
#include<stdio.h>

int main()
{
  FILE *fptr;
  fptr=fopen("Bagde.txt","r");
  
  fprintf(fptr,"Amruta is a good girl\n");
  
  char myString[100];
  
  while(fgets(myString,100,fptr))
  {
     printf("%s",myString);
  }
  
  fclose(fptr);
  return 0;
}



#include <stdio.h>
int main() {
  FILE *fptr;
  fptr = fopen("Harsh.txt", "r");

  if (fptr == NULL) {
    printf("Unable to open the file.\n");
    return 0;
  } 

 
  fclose(fptr);
  return 0;
}



#include <stdio.h>
int main() {
  FILE *fptr;
  fptr = fopen("Bagde.txt", "r");

  if (fptr == NULL) {
    printf("Unable to open the file.\n");
    return 0;
  } 
  char myString[100]; 
  while(fgets(myString, 100, fptr))
  {
      printf("%s",myString);
  }
  fclose(fptr);
  return 0;
}
*/



#include<stdio.h>
int main()
{
  FILE *fp;
  
  fp=fopen("Bagde.text","w");
  fprintf(fp,"This is Testing fo fprintf()\n");
  fputs("This is testing for fputs()\n",fp);
  fclose(fp);
}
