#include<stdio.h>
int main()
{
printf("check character are vowel or consonant*\n");
char c;
printf("Enter a character as your choice? :\n");
scanf("%c\n",&c);
if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
      printf("a character is uppercase vowel:%c\n",c);
   }
   else if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
      printf("a character is lowercase vowel:%c\n",c);
  }
  else{
     printf("a character is consonant:%c\n",c);
  }
}
    
      

   

 
                  
                        
             
