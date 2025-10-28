#include <stdio.h>

int sum(int *a, int *b) {
    *a = 20;
    *b = 10;
    int result = *a + *b;
    printf("Inside sum: %d\n", result);
   return result;
}

int main() {
    int a = 5;
    int b = 10;
    int data = sum(&a, &b);
    printf("Returned sum: %d\n", data);
    printf("Updated a + b: %d\n", a + b);
    return 0;
}