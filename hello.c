#include <stdio.h>

// Function declaration
int add(int a, int b);

// Main function
int main()
{
    int result,c,d;

    printf("C: ");
    scanf("%d",&c);
    printf("D: ");
    scanf("%d",&d);
    result = add(c, d);

    printf("Sum = %d", result);

    return 0;
}

// User-defined function
int add(int a, int b)
{
    return a + b;
}
