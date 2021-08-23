// Introduction to memory management in C

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH_1 10
#define ARRAY_LENGTH_2 20

int main(int argc, char **argv)
{
    // type "man malloc" at a linux terminal to read about malloc and friends

    // TODO: allocate an array of 10 integers using malloc()
    int *intArray = malloc(ARRAY_LENGTH_1 * sizeof(int)); 

    // TODO: print array of 10 integers
    for (int i = 0; i < ARRAY_LENGTH_1; i++){
        printf("%d ", intArray[i]);
    }
    printf("\n");

    // if (intArray != NULL){
    //     free(intArray);
    //     intArray = NULL;
    // }

    // TODO: initialise array with values 0 through 9
    for (int i = 0; i < ARRAY_LENGTH_1; i++){
        intArray[i] = i;
    }

    // TODO: print array of 10 integers
    for (int i = 0; i < ARRAY_LENGTH_1; i++){
        printf("%d ", intArray[i]);
    }
    printf("\n");

    // TODO: reallocate the array of 10 integers to 20 integers using realloc()
    // Dont need to free first
    intArray = realloc(intArray, ARRAY_LENGTH_2 * sizeof(int));

    // TODO: print array of 20 integers
    for (int i = 0; i < ARRAY_LENGTH_2; i++){
        printf("%d ", intArray[i]);
    }
    printf("\n");

    // TODO: free memory for 20 integers allocated by realloc()
    free(intArray);

    // TODO: print pointer to free'd memory as an integer, what happens if you dereference this pointer?
    printf("%p\n", intArray);
    // Good practice to sent to null, then you can check at the end to clean up
    intArray = NULL;

    // TODO: allocate an array of 20 integers using calloc()
    intArray = calloc(ARRAY_LENGTH_2, sizeof(int));

    // TODO: print array of 20 integers
    for (int i = 0; i < ARRAY_LENGTH_2; i++){
        printf("%d ", intArray[i]);
    }

    // TODO; free memory for 20 integers allocated by calloc()
    free(intArray);
    intArray = NULL;

    return EXIT_SUCCESS;
}

// Valgrind useful for checking for memory leaks