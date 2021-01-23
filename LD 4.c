#include <stdio.h>
#include <math.h>
//y=f(x)

float a, b, y, x, integralTaisnsturis,integralTrapece,/*integralSimpsonMetode,*/ delta_x, yplus;

int main ()
{
  printf ("Ievadi sakuma vertibu: ");
  scanf ("%f", &a);
    printf ("Ievadi beigu vertibu: ");
  scanf ("%f", &b);
    printf ("Ievadi precizitati: ");
  scanf ("%f", &delta_x);
  
  x=a;
  
  while(x<b){
    y = cos(x*x);
    yplus = cos((x+delta_x)*(x+delta_x));
    integralTaisnsturis += y*delta_x;
    integralTrapece += (y+yplus)/2*delta_x;
    //integralSimpsonMetode +=;
    x += delta_x; 
}
  
  printf("Taisnsturu metode: %f\nTrapecu metode: %f", integralTaisnsturis, integralTrapece);
  
  return 0;
}






/*#include<stdio.h>
#include<math.h>

void main () {
float a=0,b=M_PI/2,eps=1.e-3,h, integr1=0,integr2;
int k,n=2;

integr2=(b-a)*(cos(a)+cos(b))/n;//(b−a)/2. *cos(a)+(b−a)/2.*cos(b);
while (fabs(integr2-integr1)>eps ){
n*=2;
h=(b-a)/n;
integr1=integr2;
integr2=0;

for(k=0;k<n; k++)
integr2+=h*cos(a+(k+0.5)*h);
}
printf("Integrala vertība: %.2f\n" , integr2 );
}*/
