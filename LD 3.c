#include <stdio.h>
#include <math.h>

float a, b, y, x,delta_x, der1xAnalytical, der1xFiniteD, der2xAnalytical,der2xFiniteD;
FILE *fp = NULL;
int main ()
{
  printf ("Ievadi sakuma vertibu: ");
  scanf ("%f", &a);
    printf ("Ievadi beigu vertibu: ");
  scanf ("%f", &b);
    printf ("Ievadi precizitati: ");
  scanf ("%f", &delta_x);
  
  x=a;
  
  fp = fopen("derivative.dat" ,"w");
  fprintf(fp, "y,der1xAnalytical,der1xFiniteD,der2xAnalytical,der2xFiniteD\n");
  while(x<b){
      y = cos(x*x);
      
      der1xAnalytical =(cos((x+delta_x)*(x+delta_x))-cos( x*x ));
      der1xFiniteD = -sin(x*x)*2*x;
      der2xAnalytical =((cos((x+delta_x)*(x+delta_x))-cos( x*x ))+delta_x)-(cos((x+delta_x)*(x+delta_x))-cos( x*x ));
      der2xFiniteD = -2*sin(x*x)-4*x*x*cos(x*x);
      fprintf(fp, "%f,%f,%f,%f,%f\n", y,der1xAnalytical,der1xFiniteD,der2xAnalytical,der2xFiniteD );
      x += delta_x;
      
}
  
  
  
return 0;
}


/*#include <stdio.h>
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
*/





  
 
