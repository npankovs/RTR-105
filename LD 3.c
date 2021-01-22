#include <stdio.h>
#include <math.h>

void main (){
 float a, b,x,delta_x;
 
printf ("Ievadi a vertibu: ");
scanf ("%f", &a);

printf ("Ievadi b vertibu: ");
scanf ("%f", &b);

printf ("Ievadi delta_x vertibu: ");
scanf ("%f", &delta_x);
 //float y;
printf("\tx\t\tcos(x*x)\tcos\'(x*x)\n");
 x=a;
 while(x<b){
 //y=cos(x*x);
fprintf("%10.2f\t%10.2f\t%10.2f\n",x,cos( x*x ),(cos((x+delta_x)*(x+delta_x))-cos( x*x ))/delta_x ),-sin(x*x)*2*x,;
//printf("%10.2f\t%10.2 f\n",x,y);
x+=delta_x;//x = x + delta_x ;
}
}
