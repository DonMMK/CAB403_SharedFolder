#include <stdio.h>


void main()
{
    int m, error;
    printf("Please specify the board height: \n");
    error = scanf("%d", &m);
    if (EOF == error)
    {
        printf("No integer passed: Die evil hacker!\n");
    }

    printf("The board height is %d\n", m);
}
