/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a=12,b=3;
   int addition , subtraction, multiplication, division,modulus;
   
   addition=a+b;
   subtraction=a-b;
   multiplication=a*b;
   division=a/b;
   modulus=a%b;
   
   
   printf("addition of two numbers a,b is: %d\n",addition);
   printf("subtraction of two numbers a,b is: %d\n",subtraction);
   printf("multiplication of two numbers a,b is: %d\n",multiplication);
   printf("division of two numbers a,b is: %d\n",division);
   printf("modulus of two numbers a,b is: %d\n",modulus);
   
    return 0;
}

