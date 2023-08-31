/*
#include<stdio.h>
#include<string.h>

int main() {
    char name[3][10];
    int price[3];
    int pages[3], i;
    char (*namePtr)[10] = name;
    int *pricePtr = price;
    int *pagesPtr = pages;
    
    for(i = 0; i <= 2; i++) {
        printf("Enter details for book%d\n", i+1);
        printf("Enter name: ");
        scanf("%s", *(namePtr + i));
        printf("Enter no. of pages: ");
        scanf("%d", pagesPtr + i);
        printf("Enter price: ");
        scanf("%d", pricePtr + i);
    }
    
    printf("\n*Book Details*\n\n");
    printf("Name\tPages\tPrice\n");
    
    for(i = 0; i < 3; i++) {
        printf("%d.\nName: %s\nPrice: %d\nPages: %d\n", i+1, *(namePtr + i), *(pricePtr + i), *(pagesPtr + i));
    }
    
    return 0;
}





#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Book
{
char name[10];
int price[3];
int pages[3];
};
int main()
{
struct Book *books=(struct Book*)malloc(3*sizeof(struct Book));
struct Book *ptr=books;
int i;
for(i=0;i<=2;i++){
  printf("Enter details for book%d\n",i+1);
  printf("Enter name:");
  scanf("%s",(ptr+i)->name);
  printf("Enter no.of pages:");
  scanf("%d",(ptr+i)->pages);
  printf("Enter price:");
  scanf("%d",(ptr+i)->price);
}
printf("*Book Details*\n\n\n");
printf("Name Pages Price\n");
for(i=0; i<3; i++){
    printf("%d.\nName: %s\nPrice: %d\npages: %d\n",i+1,(ptr+i)->name,*(ptr+i)->price,*(ptr+i)->pages);
}
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct employee
{
    char name[100];
    char street[100];
    char city[100];
};

int main()
{
    printf("%ld\n",sizeof(struct employee));
    int i, n;
    struct employee e1, e2, e3;
    struct employee *ptr[3] = {&e1, &e2, &e3};
    char temp[100];

    printf("Enter the number of employees:\n");
    scanf("%d", &n);
    getchar(); // Consume the newline character after reading the integer

    for (i = 0; i < n; i++)
    {
        ptr[i] = (struct employee*)malloc(sizeof(struct employee));
        printf("Enter name, street, and city for employee %d:\n", i + 1);
        printf("Name: ");
        fgets(temp, sizeof(temp), stdin);
          strcpy(ptr[i]->name, temp);

        printf("Street: ");
        fgets(temp, sizeof(temp), stdin);
           strcpy(ptr[i]->street, temp);

        printf("City: ");
        fgets(temp, sizeof(temp), stdin);
            strcpy(ptr[i]->city, temp);
    }
    printf("\nEmployee Data:");
    for (i = 0; i < n; i++)
    {
        printf("%d.Name: %sStreet: %sCity: %s\n", i + 1, ptr[i]->name, ptr[i]->street, ptr[i]->city);
    }

    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   int i,n;
   struct stationary
   {
   char name[50];
   int cost,qty;
   };
   scanf("%d",&n);
   struct stationary s1,s2,s3;
   struct stationary *ptr[3]={&s1,&s2,&s3};
   char temp[100];
   for(i=0; i<n; i++){
       ptr[i]=(struct stationary*)malloc(sizeof(struct stationary));
        printf("Enter name,cost and quantity :");
        getchar();
        fgets(temp, sizeof(temp), stdin);
          strcpy(ptr[i]->name, temp);
        scanf("%d %d",&ptr[i]->cost,&ptr[i]->qty);
  }
  printf("\n\n*Stationary Details*\n");
  for(int i=0;i<n;i++){
            printf("\nName=%sCost=%d\nQuantity=%d\n",ptr[i]->name,ptr[i]->cost,ptr[i]->qty);
  }
  return 0;
}


#include<stdio.h>
enum month { jan, feb, march, april, may};
int main()
{
 enum month m1,m2;
 m1=april;
 m2=jan;
 int diff=m2-m1;
 printf("Months between: %d\n",diff);
 if(m1>m2)
 {
    printf("\nm2 comes before m1\n");
    return 0;
  } 
} 


#include<stdio.h>
#include<string.h>

struct person
{
    char name[25];
    char city[25];
    char Dob[12];
    long mob_no[10];

};
int main(void)
{
   struct person p1;
   char name[25];
   char city[25];
   printf("Enter name:");
   fgets(p1.name, sizeof(p1.name), stdin);
   printf("Enter city:");
   fgets(p1.city, sizeof(p1.city), stdin);
   printf("Enter Dob:");
   fgets(p1.Dob, sizeof(p1.Dob), stdin);
   printf("Enter mobile number:");
   scanf("%lu",p1.mob_no);   
   printf("\nDisplay Person Data\n");   printf("Name=%scity=%sMobile.no=%lu\nDob=%s\n",p1.name,p1.city,*p1.mob_no,p1.Dob);
 }  


/*
#include <stdio.h>
#include <string.h>

struct person
{
    char name[25];
    char city[25];
    int mob_no[10];
    double Dob[10];
};

int main(void)
{
    struct person p1;
    char name[25];
    char city[25];

    printf("Enter name: ");
    fgets(p1.name, sizeof(p1.name), stdin);

    printf("Enter city: ");
    fgets(p1.city, sizeof(p1.city), stdin);

    printf("Enter mobile number: ");
    scanf("%d", p1.mob_no);

    printf("Enter date of birth: ");
    scanf("%lf", p1.Dob);

    printf("Display Person Data\n");
    printf("Name: %sCity: %sMobile Number: %dDate of Birth: %lf\n", p1.name, p1.city, p1.mob_no[0], p1.Dob[0]);

    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct person
{
    char name[25];
    char city[25];
    char Dob[12];
    long mob_no[10];

};
int main(void)
{
   struct person *p1;
   char name[25];
   char city[25];
   p1=(struct person*)malloc(sizeof(struct person));
   printf("Enter name:");
   fgets(p1->name, sizeof(p1->name), stdin);
   printf("Enter city:");
   fgets(p1->city, sizeof(p1->city), stdin);
   printf("Enter Dob:");
   fgets(p1->Dob, sizeof(p1->Dob), stdin);
   printf("Enter mobile number:");
   scanf("%lu",p1->mob_no);   
   printf("\nDisplay Person Data\n");   printf("Name=%scity=%sMobile.no=%lu\nDob=%s\n",p1->name,p1->city,*p1->mob_no,p1->Dob);
}
  
#include<stdio.h>
#include<string.h>  
struct Car
{
    char brand[50];
    char model[50];
    int year;
};
int main()
{
  struct Car car1={"BMW","X5",1999};
  struct Car car2={"Ford","Mustang",1969};
  struct Car car3={"Toyota","Corolla",2011};
  printf("Brand\tmodel\tyear\n");
   
  printf("\n%s\t%s\t%d\n", car1.brand, car1.model, car1.year);
  printf("%s\t%s\t%d\n", car2.brand, car2.model, car2.year);
  printf("%s\t%s\t%d\n", car3.brand, car3.model, car3.year);
}

#include<stdio.h>
#include<string.h> 
#include<stdlib.h> 
struct Car
{
    char brand[50];
    char model[50];
    int year;
};
struct Car *ptr;
int main()
{
  
  struct Car *ptr1 = (struct Car*)malloc(sizeof(struct Car));
    strcpy(ptr1->brand, "BMW");
    strcpy(ptr1->model, "X5");
    ptr1->year = 1999;

    struct Car *ptr2 = (struct Car*)malloc(sizeof(struct Car));
    strcpy(ptr2->brand, "Ford");
    strcpy(ptr2->model, "Mustang");
    ptr2->year = 1969;

    struct Car *ptr3 = (struct Car*)malloc(sizeof(struct Car));
    strcpy(ptr3->brand, "Toyota");
    strcpy(ptr3->model, "Corolla");
    ptr3->year = 2011;
    
    
     printf("Brand\tmodel\tyear\n");
     printf("%s\t%s\t%d\n", ptr1->brand, ptr1->model, ptr1->year);
    printf("%s\t%s\t%d\n", ptr2->brand, ptr2->model, ptr2->year);
    printf("%s\t%s\t%d\n", ptr3->brand, ptr3->model, ptr3->year);
    
    struct Car *ptr4 =realloc(ptr4,sizeof(struct Car));
    strcpy(ptr4->brand, "CMW");
    strcpy(ptr4->model, "X9");
    ptr4->year = 2000;
    
    printf("\nAfter Updating Data:\n");
    printf("Brand\tmodel\tyear\n");
     printf("%s\t%s\t%d\n", ptr4->brand, ptr4->model, ptr4->year);
    
    

    free(ptr1);
    free(ptr2);
    free(ptr3);
    free(ptr4);

    return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    int id;
    int class;
};

void readStudent(struct Student *student)
{
    char temp[50];

    printf("Enter name: ");
    fgets(temp, sizeof(temp), stdin);
    strcpy(student->name, temp);

    printf("Enter ID: ");
    scanf("%d", &student->id);
    getchar(); // To consume the newline character

    printf("Enter class: ");
    scanf("%d", &student->class);
    getchar(); // To consume the newline character
}

void printStudent(struct Student *student)
{
    printf("%s\t%d\t%d\n", student->name, student->id, student->class);
}

int main()
{
    struct Student *ptr1 = (struct Student*)malloc(sizeof(struct Student));
    struct Student *ptr2 = (struct Student*)malloc(sizeof(struct Student));
    struct Student *ptr3 = (struct Student*)malloc(sizeof(struct Student));

    readStudent(ptr1);
    readStudent(ptr2);
    readStudent(ptr3);

    printStudent(ptr1);
    printStudent(ptr2);
    printStudent(ptr3);

    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
   char name[30];
   int id;
   int class;
};

int main()
{
    struct student s1, s2, s3;
    struct student *p = &s1;
    struct student *pt = &s2;
    struct student *ptr = &s3;
    char temp[100];

    printf("Enter name: ");
    fgets(temp, sizeof(temp), stdin);
    strcpy(p->name, temp);

    printf("Enter ID: ");
    scanf("%d", &p->id);
    getchar(); // To consume the newline character

    printf("Enter class: ");
    scanf("%d", &p->class);
    getchar(); // To consume the newline character

    printf("Enter name: ");
    fgets(temp, sizeof(temp), stdin);
    strcpy(pt->name, temp);

    printf("Enter ID: ");
    scanf("%d", &pt->id);
    getchar(); // To consume the newline character

    printf("Enter class: ");
    scanf("%d", &pt->class);
    getchar(); // To consume the newline character

    printf("Enter name: ");
    fgets(temp, sizeof(temp), stdin);
    strcpy(ptr->name, temp);

    printf("Enter ID: ");
    scanf("%d", &ptr->id);
    getchar(); // To consume the newline character

    printf("Enter class: ");
    scanf("%d", &ptr->class);
    getchar(); // To consume the newline character

    printf("******** Students Details ********\n");
    printf("%s\t%d\t%d\n", p->name, p->id, p->class);
    printf("%s\t%d\t%d\n", pt->name, pt->id, pt->class);
    printf("%s\t%d\t%d\n", ptr->name, ptr->id, ptr->class);

    return 0;
}









#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
   char name[30];
   int id[10];
   int class[5];
};
int main()
{
struct student s1,s2,s3;
struct student *p=&s1;
struct student *pt=&s2;
struct student *ptr=&s3;
char temp[100];


    printf("Enter name: ");
    fgets(temp, sizeof(temp), stdin);
    strcpy(p->name, temp);

    printf("Enter ID: ");
    scanf("%d", p->id);
    getchar(); // To consume the newline character

    printf("Enter class: ");
    scanf("%d", p->class);
    getchar(); // To consume the newline character



    printf("Enter name: ");
    fgets(temp, sizeof(temp), stdin);
    strcpy(pt->name, temp);

    printf("Enter ID: ");
    scanf("%d", pt->id);
    getchar(); // To consume the newline character

    printf("Enter class: ");
    scanf("%d", pt->class);
    getchar(); // To consume the newline character



    printf("Enter name: ");
    fgets(temp, sizeof(temp), stdin);
    strcpy(ptr->name, temp);

    printf("Enter ID: ");
    scanf("%d", ptr->id);
    getchar(); // To consume the newline character

    printf("Enter class: ");
    scanf("%d", ptr->class);
    getchar(); // To consume the newline character


 printf("\n********Students Details*********\n\n");
     printf("Name=%sId=%d\nClass=%d\n\n", p->name, *p->id, *p->class);
    printf("Name=%sId=%d\nClass=%d\n\n", pt->name, *pt->id, *pt->class);
    printf("Name=%sId=%d\nClass=%d\n", ptr->name, *ptr->id, *ptr->class);
    
    
}


#include<stdio.h>
#include<string.h>  
struct employee
{
    char name[50];
    int id;
    int age;
};

struct organization
{
    char name[50];
    int id;
    struct employee emp;
};
int main()
{
 struct organization org1={"XYZ Ltd.", 123,{"Amruta Bagde",101,30}};

printf("organization Name: %s\n",org1.name);
printf("organization id: %d\n",org1.id);
printf("organization name: %s\n",org1.emp.name);
printf("organization id: %d\n",org1.emp.id);
printf("organization age: %d\n",org1.emp.age);
return 0;
}


//Structure pointer
#include<stdio.h>
struct employee
{
  char name[20];
  int age;
  struct address
  {
    char city[20];
    char state[20];
  } addr;
};

int main()
{
   struct employee *emp_ptr;
   struct employee emp={"Nidhi",25,{"New York","NY"}};
   emp_ptr = &emp;
   
   printf("Name: %s\n",emp_ptr->name);
   printf("Age: %d\n",emp_ptr->age);
   printf("City: %s\n",emp_ptr->addr.city);
   printf("State: %s\n",emp_ptr->addr.state);
   
   return 0;
}


//passing structure to function
#include<stdio.h>

struct Inner
{
   int x;
};

struct outer
{
  int a;
  int b;
  struct Inner in;
};

void show(struct outer out)
{
   printf("a=%d\n",out.a);
   printf("b=%d\n",out.b);
   printf("x=%d\n",out.in.x);
}

int main()
{
  struct outer out={1,3,{3}};
  show(out);
  return 0;
}
 


#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int roll_no;
    int marks;
};

void print_struct(char name[], int roll_no, int marks);

int main()
{
    struct student stu={"Tim",1,78};
    print_struct(stu.name,stu.roll_no,stu.marks);
    
    printf("New name: %s\n",stu.name);
    return 0;
}

void print_struct(char name[], int roll_no, int marks)
{
  printf("Name: %s\n",name);
  printf("Roll no.: %d\n",roll_no);
  printf("Marks: %d\n\n",marks);
  
  printf("Changing Name....");
  strcpy(name, "Jack");
  printf("\n");
}

//Function structure
#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int roll_no;
    int marks;
};

void print_struct(char name[], int roll_no, int marks);

int main()
{
    struct student stu={"Tim",1,78};
    print_struct(stu.name,stu.roll_no,stu.marks);
    
    printf("New name: %s\n",stu.name);
    return 0;
}

void print_struct(char name[], int roll_no, int marks)
{
  printf("Name: %s\n",name);
  printf("Roll no.: %d\n",roll_no);
  printf("Marks: %d\n\n",marks);
  
  printf("Changing Name....");
  strcpy(name, "Jack");
  printf("\n");
}
  


 //Passing structure pointer as a Arguments to the functions.
#include<stdio.h>
struct employee
{
   char name[20];
   int age;
   char doj[10];//date of joinging
   char designation[20];
};
void print_struct(struct employee*);
int main()
{
   struct employee dev={"Jane",25,"25/2/2015","Developer"};
   print_struct(&dev);
   return 0;
}
void print_struct(struct employee *ptr)
{
  printf("Name: %s\n",ptr->name);
  printf("Age: %d\n",ptr->age);
  printf("Date of Joining: %s\n",ptr->doj);
  printf("Age: %s\n", ptr->designation);
  printf("\n");
}


#include<stdio.h>

/*
structure is defined above all functions so it is global.
*/
/*
struct company
{
   char name[20];
   char ceo[20];
   float revenue;
   float pps;
};


void print_struct(const struct company str_arr[]);


int main()
{
  struct company companies[3]={
  {"Country Books", "Tim Green", 99999999999,1300},
  {"Country Cooks","Jim Green", 9999999,700},
  {"Country Hooks","Sim Green", 99999,300},
};
print_struct(companies);

return 0;
}

void print_struct( const struct company str_arr[])
{
  int i;
  for(i=0; i<3; i++)
  {
     printf("Name: %s\n", str_arr[i].name);
     printf("CEO: %s\n", str_arr[i].ceo);
     printf("Revenue: %.2f\n",str_arr[i].pps);
     printf("price per stock: %.2f\n",str_arr[i].pps);
     printf("\n");
  }
}
   
//Invalid
#include<stdio.h>
struct movie
{
   char title[20];
   char language[20];
   char director[20];
   int year;
   int rating;
};


#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[20];
    float percentage;
};

void func(struct student *record);

int main()
{
   struct student record;//Local variable declaration
   
   record.id=1;
   strcpy(record.name, "Raju");
   record.percentage=86.5;
   
   func(&record);
   return 0;
}

void func(struct student *record)
{
  printf("Id is: %d\n",record->id);
  printf("Name is: %s\n",record->name);
  printf("Percentage is: %lf\n",record->percentage);
}


#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[20];
    float percentage;
};

struct student record;//Global variable declaration

void demo();

int main()
{
   
   record.id=1;
   strcpy(record.name, "Raju");
   record.percentage=86.5;
   
   demo();
   return 0;
}

void demo()
{
  printf("Id is: %d\n",record.id);
  printf("Name is: %s\n",record.name);
  printf("Percentage is: %lf\n",record.percentage);
}


#include<stdio.h>

struct player
{
   char name[20];
   float height;
   float weight;
   float fees;
};

void print_struct(struct player p);
struct player deduct_fees(struct player p);

int main()
{
   struct player p={"Joe",5.9,59,5000};
   print_struct(p);
   p=deduct_fees(p);
   print_struct(p);
 
   return 0;
}

struct player deduct_fees(struct player p)
{
  p.fees -=1000;
  return p;
}

void print_struct(const struct player p)
{
   printf("Name: %s\n",p.name);
   printf("Height: %.2f\n",p.height);
   printf("Weight: %.2f\n",p.weight);
   printf("Fees: %.2f\n",p.fees);
   
   printf("\n");
} 

   
#include<stdio.h>
struct movie
{
   char title[50];
   char language[15];
   char director[40];
   char hero_name[35];
   char heroin_name[40];
   int rating;
};
void print_struct(const struct movie *p);
struct movie* add_rating(struct movie *P);
int main()
{
   struct movie m = {"The Fantramodelling","English","Gavin o'Connor", "Salman Khan","Anythinhg else", 1000};//local variable
   struct movie *ptr_m1 = &m, *ptr_m2;
   
   print_struct(ptr_m1);
   ptr_m2 = add_rating(ptr_m1);
   print_struct(ptr_m2);
   
   return 0;
}
struct movie* add_rating(struct movie *p)
{
   p->rating++;
   printf("Rating: %d\n",p->rating);
   return p;
}
void print_struct(const struct movie *p)
{
   printf("Title: %s\n", p->title);
   printf("Language: %s\n",p->language);
   printf("Director: %s\n",p->director);
   printf("Hero Name: %s\n",p->hero_name);
   printf("Heroin name: %s\n",p->heroin_name); 
}
   

#include<stdio.h>

struct student
{
  char name[50];
  int age;
};

void display(struct student s);

int main()
{
 struct student s1;
 
 printf("Enter name: ");
 scanf("%[^\n]%*c",s1.name);
 
 printf("Enter age: ");
 scanf("%d",&s1.age);
 
 display(s1);
 return 0;
}

void display(struct student s)
{
   printf("\nDisplaying information\n");
   printf("Name: %s",s.name);
   printf("\nAge: %d\n",s.age);
}


#include<stdio.h>
typedef struct Complex
{
  float real;
  float img;
} complex;

void addNumbers(complex c1, complex c2, complex *result);

int main()
{
   complex c1, c2, result;
   
   printf("For first number,\n");
   printf("Enter real part: ");
   scanf("%f",&c1.real);
   printf("Enter imaginary part: ");
   scanf("%f",&c1.img);
   
   printf("For second number,\n");
   printf("Enter real part: ");
   scanf("%f",&c2.real);
   printf("Enter imaginary part: ");
   scanf("%f",&c2.img);
   
   addNumbers(c1,c2,&result);
   printf("\nresult.real = %.1f\n",result.real);
   printf("result.img = %.1f",result.img);
 return 0;
}
void addNumbers(complex c1, complex c2, complex *result)
{
    result->real = c1.real+c2.real;
    result->img = c1.img+c2.img;
}



//unions and structure (difference betwwen)
#include <stdio.h>
union UnionJob
{
   char name[32];
   float salary;
   int workerNo;
} ujob;
struct StructJob
{
   char name[32];
   float salary;
   int workerNo;
} sjob;
int main()
{
 printf("size of union = %ld bytes\n",sizeof(ujob));
 printf("size of structure = %ld bytes\n",sizeof(sjob));
 return 0;
}



//Accessing union Members
#include<stdio.h>
#include<stdlib.h>
union job
{
  double salary;
  int workerNo;
}*j;
int main()
{
 union job *j=(union job *)malloc(sizeof(union job));
 scanf("%lf\n",&j->salary);
 scanf("%d",&j->workerNo);
 
 printf("Salary: %.1lf\n",j->salary);
 printf("WorkerNo: %d\n",j->workerNo);
 free(j);
 return 0;
} 



#include<stdio.h>
#include<stdlib.h>
union abc
{
  int a;
  char b;
}*var;
int main()
{
union abc *var=(union abc *)malloc(sizeof(union abc)); 
  var->a=66;
  var->b=65;
  printf("a=%d\n",var->a);
  printf("b=%c\n",var->b);
}


//Nested union

#include<stdio.h>
union test1
{
    int x; 
    int y;
    union test2
    {
      int x;
      char y;
      union test3
      {
        int arr[10];
        char y;
      } Test3;
    } Test2;
} Test1, Test2, Test3;

int main()
{
  int size1 = sizeof(Test1);
  int size2 = sizeof(Test2);
  int size3 = sizeof(Test3);
  
  printf("sizeof test1: %d\n",size1);
  printf("sizeof test2: %d\n",size2);
  printf("sizeof test3: %d\n",size3);
  return 0;
  //output 40 40 40
}


#include<stdio.h>
union test1
{
  int x; 
  int y;
} Test1;
union test2
{
  int x;
  char y;
} Test2;
union test3
{
  int arr[10];
  char y;
} Test3;

int main()
{
  int size1 = sizeof(Test1);
  int size2 = sizeof(Test2);
  int size3 = sizeof(Test3);
  
  printf("sizeof test1: %d\n",size1);
  printf("sizeof test2: %d\n",size2);
  printf("sizeof test3: %d\n",size3);
  return 0;
  // output 4,4,40
}



//pointer Nested union
#include<stdio.h>
union test1
{
  int x; 
  int y;
} *Test1;
union test2
{
  int x;
  char y;
} *Test2;
union test3
{
  int arr[10];
  char y;
} *Test3;

int main()
{
  int size1 = sizeof(Test1);
  int size2 = sizeof(Test2);
  int size3 = sizeof(Test3);
  
  printf("sizeof test1: %d\n",size1);
  printf("sizeof test2: %d\n",size2);
  printf("sizeof test3: %d\n",size3);
  return 0;
  // output 8,8,8 Because size of pointer
}


//Recursion
//Function calling itself it is called recursion.

#include<stdio.h>
int sum(int k);

int main()
{
  int result=sum(10);
  printf("%d\n",result);
  return 0;
}
int sum(int k)
{
  if(k>0)
  {
   return k+sum(k-1);
  }
  else
  {
    return 0;
  }
}



#include<stdio.h>
int fibonacci(int k);

int main()
{
  int i,n;
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
     printf("%d ",fibonacci(i));
  }
  printf("\n");
  return 0;
}
int fibonacci(int k)
{
  if(k==0)
  {
   return 0;
  }
  else if(k==1)
  {
    return 1;
  }
  return fibonacci(k-1)+fibonacci(k-2);
}



#include<stdio.h>
int sum(int k);

int main()
{
  int num;
  printf("Enter any Number: ");
  scanf("%d",&num);
  int result=sum(num);
  printf("%d\n",result);
  return 0;
}
int sum(int k)
{
  if(k>0)
  {
   return k+sum(k-1);
  }
  else
  {
    return 0;
  }
}


#include<stdio.h>
void display(int *n);

int main()
{
  int n;
  scanf("%d",&n);
  display(&n);
  return 0;
}
void display(int *n)
{
  if(*n==0)
  {
    return;
  }
  else
  {
    printf("%d\n",*n);
    (*n)--;
    display(n);
  }
}


#include<stdio.h>
int fact(int n);

int main()
{
  int n;
  scanf("%d",&n);
  int res=fact(n);
  printf("%d!=%d\n",n,res);
  return 0;
}
int fact(int n)
{
  int f=1;
  if(n<=0)
  {
    return(1);
  }
  else
  {
    f=n*fact(n-1);
    return(f);
  }
}


#include<stdio.h>
int Digitsum(int n1);
int main()
{
  int n1,sum;
  scanf("%d",&n1);
  sum=Digitsum(n1);
  printf("Sum=%d\n",sum);
  return 0;
}
int Digitsum(int n1)
{
 if(n1==0)
 {
   return 0;
 }
 else
 {
   return ((n1%10) + Digitsum(n1/10));
 }
}


#include<stdio.h>
int Pass(int i, int n1);
int main()
{ 
 int n1,i=1;
 scanf("%d",&n1);
 Pass(i,n1);
 return 0;
}
int Pass(int i,int n1)
{
 if(i==11)
 {
   return 0;
 }
 else
 {
   printf("%d * %d = \t%d\n",n1,i,n1*i);
   return Pass(i=i+1,n1);
 }
}
*/



#include <stdio.h>

	int main() {
     int T,N;
     scanf("%d",&T);
     for(int i=0; i<T; i++)
     {
         scanf("%d",&N);
         
         int CA=0, CB=0;
          char ch[N];
         
         for(int j=0; j<N; j++)
         {
             scanf("%s",ch);
             int i=0;
             while(ch[i]!='\0')
             {
                if(ch[i] =='A')
                {
                 CA++;
                 i++;
                }
                else if(ch[i] =='B')
                {
                   CB++;
                   i++;
                }
                i++;
             }
          }
          printf("%d %d",CA,CB);
      }
      return 0;
             
}


