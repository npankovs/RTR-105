#include <stdio.h>
#include<math.h>

long double mans_kosinuss(long double x){
long double a,S,r;
int  k=0;


a = pow(-1,k)*pow(x,4*k)/(1.);
S = a;
//printf("Piešķirt vērtību x (veselos skaitļos)");
//printf ("%.3f\t%8.3f\t%8.3f\n",x,a,s);

while(k<1000){
k++;
r = ((-1)*x*x*x*x) / ((2*k-1)*(2*k));
a = a*r;
S = S+a;
//printf("%8.3f\t%8.3f\t%8.3f\n",x,a,s);

if(k == 5){
printf("\na5 = %10.3Le\t S5 = %10.3Le\n",a,S);
        }
if(k == 250){
printf("a250 = %10.3Le\t S250 = %10.3Le\n",a,S);
        }
if(k == 500){
printf("a500 = %10.3Le\t S500 = %10.3Le\n",a,S);
        }
if(k == 750){
printf("a750 = %10.3Le\t S750 = %10.3Le\n",a,S);
        }
if(k == 1000){
printf("a1000 = %10.3Le\t S1000 = %10.3Le\n",a,S);
                }
        }
return S;
}

void main(){
double x,y,yy;

printf("Cos(x^2) aprēķināšana;\nIevadiet argumentu x:");
scanf("%lf",&x);


y = cos(x*x);
printf("standarta finkcija cos y = cos(%3f*%3f) = %3f\n",x,x,y);

yy = mans_kosinuss(x);
//printf("lietotāja funkcija  y = cos(%3.f) = %.3f\n",x,yy);

//printf("cos(%8.3f) = %.3f",x,yy);
printf("Cos (%.3f*%.3f) = %.3f \n",x,x,yy);


printf("\n\n                     500                        \n");
printf("                    _____                        \n");
printf("                    \\           k   4*k            \n");
printf("                     \\      (-1) * x               \n");
printf(" cos(x*x) =           >    ____________         \n",x,x);
printf("                     /                      \n");
printf("                    /____      (2*k)!              \n");
printf("                     k=0                        \n");
printf("                                                \n");

printf("                                     4                  \n");
printf("                                   -x                   \n");
printf(" Rekurences reizinātājs:   ____________________         \n");
printf("                                                       \n");
printf("                             (2*k-1) * (2*k)          \n\n\n");


}
