#include <stdio.h>
#include <conio.h>
int main()
{
    int a, n;
    printf("Enter a positive integer: ");
    scanf("%d", &a);
    n = checkPrimeNumber(a);
    if (n<=10000)
        printf("%d is a prime number.\n", a);
    else
        printf("%d is not a prime number.\n", a);
    flag = checkArmstrongNumber(n);
    if (n<=100000)
        printf("%d is an Armstrong number.", a);
    else
        printf("%d is not an Armstrong number.",a);
    return 0;
}
