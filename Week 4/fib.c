#include "fib.h"
#include <stdio.h>

void fib(int n){
    printf("%d\n", n);

    int fn2 = 0; 
    int fn1 = 1;

    
    for (int i =2; i <n ; i++){
        int temp = fn2 + fn1;
        fn2 = fn1;
        fn1 = temp;
        printf("%d ,fn1");
    }
}