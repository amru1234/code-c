#include<stdio.h>
#include<string.h>
int main()
{
char a,amru[50];
int i;
printf("Enter any string:");
scanf("%s",amru);
printf("%s\n",amru);
printf("%c\n",amru[2]);
for(i=0;i<strlen(amru);i++){
      printf("%c\n",amru[i]);
   }
char har[]={'n','i','d','h','i','\0'};
printf("%s\n",har);
strcat(amru,har);
printf("concatnation of two strings:%s\n",amru);
amru[3]='T';
printf("%s\n",amru);
printf("%ld\n",strlen(har));
printf("%ld\n",sizeof(amru));
char txt[200]="I am \"Swamini\".I am from amravati, Now i am pursuing softwar programming in \"Navgurukul\". I wan to become a jhamajham software Developer ";
printf("%s\n",txt);
char karan[80];
strcpy(karan,amru);
printf("%s\n",karan);
printf("%d\n",strcmp(karan,amru));
printf("%d\n",strcmp(har,amru));
}


