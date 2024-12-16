#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
   /*d5al el input ana ha7oto b2sm gambaryy*/
   const char gambaryy;
   int counter = 0;
   int number_halls = 0;
  int array1[] = {strtok(gambaryy, "[" "," ";" "]")};
   while( array1 != NULL ) {
        const char sala7 = {array1[counter]};
    if(isalpha(sala7)){
        ++counter;
        ++number_halls;
        printf("%d",number_halls);
   }

   }


    return 0;
}

