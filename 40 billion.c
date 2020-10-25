/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    long int a;
    long int b;
    //long long int c = a*b;
    
    printf("Ievadiet skaitli: ");
    scanf("%ld", &a);
    printf("Ievadiet otro skaitli: ");
    scanf("%ld", &b);
    printf ("%ld * %ld = %lld", a, b, a*b);
    

    return 0;
}
