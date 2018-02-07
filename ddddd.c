#include <stdio.h>
#include <conio.h>
int main() {
    int a, b,c, value, sum=0, i;
    printf("Enter the number of terms in AP series\n");
    scanf("%d", &c);
    printf("Enter first term and common difference of AP series\n");
    scanf("%d %d", &a, &b);
    value = a;
    printf("AP SERIES\n");
    for(i = 0; i < c; i++) {
        printf("%d ", value);
        sum += value;
        value = value + b;
    }
    printf("\nSum of the AP series till %d terms is %d\n", c, sum);
    getch();
 return 0;
}
