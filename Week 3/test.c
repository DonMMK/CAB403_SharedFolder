#include <stdlib.h>

typedef struct person person_t; // this allows to call structs easily

struct person{
    int a;
    //double b;
    char* name;

}; // <- when this structure is examined you can see that there is padding for the memory

int main(){
    size_t size = sizeof(person_t);

    person_t* ben = malloc(sizeof(person_t));
    person_t ben;

    ben->a = 5;
    // ben.b = 10;
    // ben.name = "benjamin"; // <- this just records the pointer
    // the arrow does a de reference followed by a pointer to the
    
    //(*ben).name = "benjamin";
    ben->a = 5;

    free(ben); // only frees the structs
    

}