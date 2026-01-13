#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float D, root1, root2;

    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b*b - 4*a*c;

    root1 = (-b + sqrt(D)) / (2*a);
    root2 = (-b - sqrt(D)) / (2*a);

    printf("Root 1 = %.2f\n", root1);
    printf("Root 2 = %.2f\n", root2);
    

    return 0;
}
