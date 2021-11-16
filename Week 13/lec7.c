#include <stdio.h>

#define BUFFER_SIZE 256

int main(int argc, char *argv[]){
    char buffer[BUFFER_SIZE];
    if(argc < 2)
    return -1;
    else{
        strcpy(buffer, argv[1]);
        return 0;
    }
}