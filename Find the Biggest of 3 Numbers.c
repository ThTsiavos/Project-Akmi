#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b, c;

    printf("Enter 1st number : ");
    scanf("%d", &a);

    printf("\nEnter 2nd number : ");
    scanf("%d", &b);

    printf("\nEnter 3rd number : ");
    scanf("%d", &c);

    if(a >= b) {

        if(a >= c) {

            printf("\n%d is the largest number", a);

        } else {

            printf("\n%d is the largest number", c);
        }

    } else {

        if(b >= c) {

            printf("\n%d is the largest number", b);

        } else {

            printf("\n%d is the largest number", c);
        }

    }

    return 0;
}
