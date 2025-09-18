#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
   int bunja, bunmo;
   
   printf("enter bunja:");
   scanf("%d", &bunja);
   
   printf("enter bunmo:");
   scanf("%d", &bunmo);
   
   printf("The result is %f\n", (float)bunja/bunmo);
   
   system("PAUSE");
   return 0;
}
