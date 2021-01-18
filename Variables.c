

//===================>   Variable in C Programming language     <=====================================

// 1. program variable declartion program

#include<stdio.h>
int main() 
{

 int rollnum = 1234;
 char name[10] = "program", gender = 'M';
 float height = 4.700;
    
    printf("Roll no :-   %d  \n",rollnum);
    printf("Name :-  %s \n", name);
    printf("Gender :- %c  \n", gender);
    printf("Height :-  %f  \n", height);

    return 0;

}

// 2.  program input and output 

#include<stdio.h>
int main()     // function 
{
 char name;

    printf("Enter a your good name \n "); // ---> output 
    scanf("%c", &name);         // ---->  input

    return 0;
}


// 3. global variable and local variable declartion 

#include <stdio.h>

float a ;
int b;       // ===> global variable 
char c;

int main()
{
    float x;
    int y;       //===> local variable 
    char z; 

  printf("a = %f, b = %d, c = %c  \n", a, b, c );
  printf("x = %f, y = %d, z = %c   \n", x,y,z );

   return 0;
}


// 4. gloabal variable and local variable addition program

#include <stdio.h>

//Global Variable declaration:
 int a, b;
 int c;
 float f;

int main () {

   /* variable definition: */
   int a, b;
   int c;
   float f;
 
   /* actual initialization */
    a = 10;
     b = 20;
  
   c = a + b;
   printf("value of c : %d \n", c);

   f = 7.;
   printf("value of f : %f \n", f);
 
   return 0;
}


// 5. program differnt variable name


#include <stdio.h>
int main()
{
    // declaration and definition of variable 'a123'
    char a123 = 'a'; 
 
    // This is also both declaration and definition as 'b' is allocated
    // memory and assigned some garbage value.   
    float b;  
 
    // multiple declarations and definitions
    int _c, _d45, e; 
 
    // Let us print a variable
    printf("%c \n", a123);
 
    return 0;
}

//  6 . program

#include <stdio.h>
int a = 20;   //==> global variable 

int main()
{
    int a = 30;
    printf("a %d",a);
}


// 7. Program


#include <stdio.h>

int a = 10;

int main()
{
    int a = 20; 
    printf("a = %d \n",a);

    {
        int a = 30; 

        printf("a = %d \n", a);
    }

    printf("a = %d", a);
  
}

// 8. program

#include <stdio.h>

int b = 10;   /* global variable */


void main()
{
    int a = 20;    /* local variable */

    printf("a =%d \n", a);
    {
        a = 30;      /*  local variable */

        printf("a = %d \n", a);

    }

    printf("b = %d \n",b);
}






