#include <stdio.h>  
#define INCR(x) (++x)  
void main() 
{    
  int x=10; 
  char *ptr = "Good";
  printf("%d\n", INCR(x));    
  printf("%s\n", INCR(ptr));    
}  
