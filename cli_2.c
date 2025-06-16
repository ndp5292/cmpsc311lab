#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
   printf("\n Demonstrate the command line arguments");

   if (strstr(argv[1], "add"))
   {
       printf("\n addition result = (%d)\n", atoi(argv[2]) + atoi(argv[3]));
   }
   else if (strstr(argv[1], "sub"))
   {
       printf("\n subtraction result = (%d)\n", atoi(argv[2]) - atoi(argv[3]));
   }
   else if (strstr(argv[1], "div"))
   {
       int divisor = atoi(argv[3]);
       if (divisor == 0)
       {
           printf("\n Error: Division by zero is not allowed.\n");
       }
       else
       {
           printf("\n division result = (%d)\n", atoi(argv[2]) / divisor);
       }
   }
   else
   {
       printf("\n wrong input \n");
   }

   return 0;
}
