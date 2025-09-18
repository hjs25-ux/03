#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
   char c, d;
   int i, g;
   
   printf("enter a character : ");
   scanf("%c", &c);
   
   i = c;
   d = c + 1;
   g = d;
   
   printf("The next character of %c(%i) is %c(%i)", c,i,d,g);
   
   system("PAUSE");
   return 0;
}
