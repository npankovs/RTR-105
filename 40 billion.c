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
