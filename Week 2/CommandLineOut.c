#include <stdio.h>

/* Use the fuill declating which has the argc and argv 
Will alwyas have at least one because that is the name of the program*/
/* CMdLine args are jsut the */

int main(int argc, char *argv[]) {
printf("The number of command line arguments is %d\n", argc);
printf("The name of the program is %s\n", argv[0]);
    for (int = 0; i < argc; i++){
        printf("Args %d: %s\n" , i , argv[i]);
    }
return 0;
}

