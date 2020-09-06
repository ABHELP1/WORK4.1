#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI (3.141592653589793)
int main()
{
    int r;
    double a, b;
    scanf("%d", &r);
    a = PI * r * r;
    b = r * (r + r);
    printf("%.6f\n%.6f", a, b);
}
