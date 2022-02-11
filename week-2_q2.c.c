/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a,b;
   printf("enter two values:\n");
   scanf("%d %d",&a,&b);
   
   if(a>b)
   {
       printf("%d is greater than %d",a,b);
   }
   else
   {
       printf("%d is greater than %d",b,a);
   }
    return 0;
}


