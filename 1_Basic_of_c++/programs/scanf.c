#include<stdio.h>

int main()
{
    int a, b, sum;

    printf("Enter two numbers: ");
    // Input should be pass from here
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d", a, b);
    // Addition
    sum = a + b;
    printf("\nSum of a = %d, b = %d is %d", a, b, sum);
    printf("\n");
    return 0;
}