#include <stdio.h>

struct race { // struct name 
int seconds;
float distance;
};

struct race r = {60, 5.5};
struct race *pr = &r;
int *pi = (int *)pr;
float *pf = (float *) ((char *)pr) + 4); 

int main(){
    return 0;
}