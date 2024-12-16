#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
   /*d5al el input ana ha7oto b2sm gambaryy*/
   const char gambaryy;
   int counter = 0;
   int student_dropped_id;
  int array1[] = {strtok(gambaryy, "[" "," ";" "]")};
   while( array1 != NULL ) {
        const char sala7 = {array1[counter]};
        const char abofatla ={array1[counter+1]};
        printf("dropped ids are \n");
    if(sala7 != abofatla){
            printf("%d",sala7+1);
        ++counter;
   }

   }


    return 0;
}

