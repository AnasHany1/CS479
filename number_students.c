#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
   /*d5al el input ana ha7oto b2sm gambaryy*/
   const char gambaryy;
   int counter = 1;
   int number_students = 0;
  int array1[] = {strtok(gambaryy, "[" "," ";" "]")};
   while( array1 != NULL ) {
        const char sala7 = {array1[counter]};
    if(strcmp(array1[0],sala7) == 0 || 1){
        ++counter;
        ++number_students;
   printf("%d",number_students);
   }

   }


    return 0;
}

