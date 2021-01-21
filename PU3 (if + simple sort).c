#include <stdio.h>

 int 
main () 
{
  
 
int a;
  
 
int b;
  
 
int c;
  
 
char s;
  
 
printf ("Ievadiet 1.skaitli:");
  
 
scanf ("%d", &a);
  
 
printf ("Ievadiet 2.skaitli:");
  
 
scanf ("%d", &b);
  
 
printf ("Ievadiet 3.skaitli:");
  
 
scanf ("%d", &c);
  
 
printf ("Ievadit skaitlu secību augosa - u ; dilstosa - d\n");
  
 
 
scanf (" %c", &s);	// working solution
  
// scanf ("%1c", &s);
//printf ("%d\n", s); // ASCII
    
//printf ("Vai ievaditais simbols ir a %d\n", s == 'a');
    if (s == 'u')
    
    {
      
 
 
if ((a >= b) && (b >= c))
	
	{
	  
 
printf (" %d %d %d\n ", c, b, a);
	
 
}
      
 
      else if ((c >= b) && (b >= a))
	
	{
	  
 
printf (" %d %d %d\n ", a, b, c);
	
 
}
      
 
      else if ((a >= c) && (c >= b))
	
	{
	  
 
printf (" %d %d %d\n ", b, c, a);
	
 
}
      
 
      else if ((b >= c) && (c >= a))
	
	{
	  
 
printf (" %d %d %d\n ", a, c, b);
	
 
}
      
 
      else if ((b >= a) && (a >= c))
	
	{
	  
 
printf (" %d %d %d\n ", c, a, b);
	
 
}
      
 
      else if ((c >= a) && (a >= b))
	
	{
	  
 
printf (" %d %d %d\n ", b, a, c);
	
 
}
    
 
}
  
if (s == 'd')
    
    {
      
 
 
if ((a >= b) && (b >= c))
	
	{
	  
 
printf (" %d %d %d\n ", a, b, c);
	
 
}
      
 
      else if ((c >= b) && (b >= a))
	
	{
	  
 
printf (" %d %d %d\n ", c, b, a);
	
 
}
      
 
      else if ((a >= c) && (c >= b))
	
	{
	  
 
printf (" %d %d %d\n ", a, c, b);
	
 
}
      
 
      else if ((b >= c) && (c >= a))
	
	{
	  
 
printf (" %d %d %d\n ", b, c, a);
	
 
}
      
 
      else if ((b >= a) && (a >= c))
	
	{
	  
 
printf (" %d %d %d\n ", b, a, c);
	
 
}
      
 
      else if ((c >= a) && (a >= b))
	
	{
	  
 
printf (" %d %d %d\n ", c, a, b);
	
 
}
    
 
}
  
 
return 0;

 
}
//c
