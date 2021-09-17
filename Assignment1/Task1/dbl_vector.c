#include <stdio.h>
#include <stdlib.h>
#include "dbl_vector.h"

//PASSED
void dv_init( dbl_vector_t* vec ) {
    // INSERT SOLUTION HERE
    vec->capacity = DV_INITIAL_CAPACITY;
    vec->size = 0;
    double new_mem_size = DV_INITIAL_CAPACITY* sizeof(double);
    vec->data = malloc(new_mem_size);
}

// Check if prevous values are being used
void dv_ensure_capacity( dbl_vector_t* vec, size_t new_size ) {
    // INSERT SOLUTION HERE
    size_t old_capacity = vec->capacity;
    size_t old_size = vec->size;
    double *old_data = vec->data;

    if (new_size <= old_capacity)
    {
        vec->capacity = old_capacity;
        vec->data = old_data;
    }
    else
    {
        int new_capacity = fmax(old_capacity * DV_GROWTH_FACTOR, new_size);
        vec->capacity = new_capacity;
        vec->data = realloc(old_data, sizeof(double)*new_capacity);
    }

}

// Data not freed properly
void dv_destroy( dbl_vector_t* vec ) {
    // INSERT SOLUTION HERE
    vec->capacity = 0;
    vec->size = 0;
    free(vec->data);
    //void free(void *data); 
    vec->data = NULL;
}

//PASSED
void dv_copy( dbl_vector_t* vec, dbl_vector_t* dest ) {
    // INSERT SOLUTION HERE
    dest->size = vec->size;
    dv_ensure_capacity(dest, vec->size);

    for(int i = 0; i < vec->size ;i++){
        dest->data[i] = vec->data[i];
    }

}


void dv_clear( dbl_vector_t* vec ) {
    // INSERT SOLUTION HERE
    vec->size = 0;
}

void dv_push( dbl_vector_t* vec, double new_item ) {
    // INSERT SOLUTION HERE
    size_t old_size = vec->size;
    double *old_data = vec->data;

    vec->size = old_size + 1;
    dv_ensure_capacity(vec, old_size + 1);
    for(int i = 0; i < old_size ;i++){
        vec->data[i] = old_data[i];
    }
    vec->data[old_size] = new_item;

}

void dv_pop( dbl_vector_t* vec ) {
    // INSERT SOLUTION HERE
    size_t old_size = vec->size;
    double* old_data = vec->data;
    size_t old_capacity = vec->capacity;

    vec->capacity = old_capacity;
    vec->data = old_data;

    if(old_size > 0)
    {
        vec->size = old_size - 1;
        for(int i= 0; i < old_size - 1; i++){
            vec->data[i] = old_data[i];
        }
    }
    else
    {
        vec->size = 0;
    }

}


double dv_last( dbl_vector_t* vec ) {
    double result = NAN;
    // INSERT SOLUTION HERE
    size_t old_size = vec->size;
    double *old_data = vec->data;
    size_t old_capacity = vec->capacity;

    vec->size = old_size;
    vec->capacity = old_capacity;
    vec->data = old_data;

    for(int i = 0; i < vec->size ; i++){
        vec->data[i] = old_data[i];
    }

    if(vec->size > 0){
        return vec->data[vec->size - 1];
    }else{
        return NAN;
    }
    return result;
}

void dv_insert_at( dbl_vector_t* vec, size_t pos, double new_item ) {
    // INSERT SOLUTION HERE
    size_t old_size = vec->size;
    double *old_data = vec->data;
    int loc = fmin(pos, old_size);

    vec->size = old_size + 1;
    dv_ensure_capacity(vec,old_size+1);
    for(int i = 0; i < loc ; i++){
        vec->data[i] = old_data[i];
    }

    for(int i = loc+1; i < vec->size ; i++){
        vec->data[i] = old_data[i-1];
    }
    vec->data[loc] = new_item;

}

void dv_remove_at( dbl_vector_t* vec, size_t pos ) {
    // INSERT SOLUTION HERE
    size_t old_size = vec->size;
    double *old_data = vec->data;
    int loc = fmin(pos, old_size);

    for(int i= 0 ; i < loc; i++){
        vec->data[i] = old_data[i];
    }

    for(int i= loc; i < vec->size; i++){
        vec->data[i] = old_data[i+1];
    }
    if(pos >= old_size){
        vec->size = old_size;
    }
    else{
        vec->size = old_size - 1;
    }
  

}

void dv_foreach( dbl_vector_t* vec, void (*callback)(double, void*), void* info ) {
    // INSERT SOLUTION HERE
    size_t old_size = vec->size;
    double *old_data = vec->data;
    size_t old_capacity = vec->capacity;


    vec->capacity = old_capacity;
    vec->size = old_size;
    vec->data = old_data;
    for(int i = 0; i < vec->size; i++){
        callback(vec->data[i], info);
    }
}

