#include <stdio.h>
#include<math.h>

float modified_cos (float x , float A)

{
return cos (x*x)-A;
}

int main () {

//float a=0.01,A, b=1.5*M_PI, x, delta_x =1.e-3/* 0.001 */,funkca, funkcb, funkcx;

float a,b,A,x,delta_x,funkca, funkcb, funkcx;
int k=0;

//printf ("M_PI=%.5f\n", M_PI);

printf ("Ievadi a vertibu jeb intervāla sākumu: ");
scanf ("%f", &a);

printf ("Ievadi b vertibu jeb intervala beigas: ");
scanf ("%f", &b);

printf("Ievadi A vertību sekojosham vienaadojumam: cos ( x*x )= A\n" );
scanf ( "%f",&A) ;

printf ("Ievadi delta_x vertibu jeb precizitāti: ");
scanf ("%f", &delta_x);



funkca = modified_cos(a,A) ; funkcb = modified_cos(b,A);

if (funkca*funkcb>0){
printf ("Intervāla (%.2f ; %.2f) cos(x*x) funkcijai",a,b);
printf("sakņu nav( vai tajā ir pāra sakņu skaits)\n" );
return 1;
}


printf ( " cos(%7.3f*%7.3f )=%7.3f\t\t\t\t " ,a , a, cos(a*a) ) ;
printf( " cos(%7.3f*%7.3f )=%7.3f \n", b ,b, cos(b*b) ) ;


while ((b-a)>delta_x ){
k++; //k=k+1;//k+=1;
x=(a+b)/2. ;
if ( funkca * modified_cos(x,A)>0) // pie a=0 −> funkca=0 −> reizinaajums ir preciizi 0 visu laiku −>visu laiku ” straadaa ” b=x
a = x;
else
b = x;
printf( "%2d. iteraacija:cos (%7.3f*%7.3f )=%7.3f\t" , k, a, a, cos(a*a)) ;
printf( "cos(%7.3f*%7.3f )=%7.3f",x,x, cos(x*x) ) ;
printf(" cos(%7.3f*%7.3f )=%7.3f\n", b ,b, cos(b*b)) ;}

printf( "Saakne atrodas pie x=%.3f, jo cos(x*x) ir %.3f \n" ,x, cos(x*x) );

printf ("Lai samekletu sakni bija jaizpilda %d iteraacijas\n", k);

return 0;}
