#include <iostream>
#include <stdio.h>

int main()
{
    int a;
    long a1;
    char a2;
    float a3;
    double a4;
    scanf("%d %ld %c %f %lf", &a, &a1, &a2, &a3, &a4);
    printf("%d\n%ld\n%c\n%.2f\n%.5lf", a, a1, a2, a3, a4);
}