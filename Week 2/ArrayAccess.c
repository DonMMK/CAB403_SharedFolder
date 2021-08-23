/*string are a character array 
with a null character at the end 


*/

// Purpose:  Introduction to arrays and strings in C

#include <stdio.h>
#include <stdlib.h>

#define TEXT_SIZE 15  // length of text array
#define NUMBER_SIZE 7 // length of number array

char text[] = {'B', 'R', 'A', 'D', 'L', 'E', 'Y', ' ', 'J', 'O', 'N', 'E', 'S', 0, 'X'};
int number[] = {66, 82, 65, 68, 76, 69, 89};

int main(int argc, char **argv)
{
   // type 'man -s 3 printf' at the linux terminal to learn how printf() works
   printf("Print name of program using printf()...\n");
   // TODO: implement
   printf("%s\n" , argv[0]);

   printf("\n\nPrint program arguments using printf()...\n");
   // TODO: implement
   for (int = 1; i < argc; i++){
        printf("Args %d: %s" , i , argv[i]);
    }
    printf("\n")

   printf("\nIterate over text array and print characters using array index operator []...\n");
   // TODO: implement
    for(int i= 0; i < TEXT_SIZE; i++){
        printf("%c" , text[i]);
    }

   printf("\n\nIterate over text array and print chracters using offsets *(text + offset)...\n");
   // TODO: implement

   printf("\n\nIterate over text array and print characters by incrementing pointer...\n");
   // TODO: implement

   printf("\n\nPrint text array as string using printf()...\n");
   // TODO: implement

   printf("\n\nPrint number array as decimals...\n");
   // TODO: implement

   printf("\n\nPrint number array as characters...\n");
   // TODO: implement

   return EXIT_SUCCESS;
}