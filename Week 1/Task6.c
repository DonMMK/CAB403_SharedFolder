#include <stdio.h>

int sumNumbers(int a, int b); /* function prototype */

int main(void) {
    int a, b, result;
    printf("Enter two integers separated by a space: ");
    scanf("%d%d", &a, &b);
    result = sumNumbers(a,b);
    printf("\nThe sum of %d and %d is %d\n", a, b, result);
    return 0;
}

int sumNumbers(int x, int y) {
    int SumXY = x + y;
    return SumXY;
}