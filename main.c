#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("enter your degree: ");
    scanf("%d", &a);
    
    float radian = (a*3.14)/180;
    
    printf("the sine function is %.2f\n", sin(radian));
    printf("the cosine function is %.2f\n", cos(radian));
    printf("the log function is %.2f\n", log(a));
    printf("the square root is %.2f\n", sqrt(a));
    
    int n;
    printf("input value of n\n");
    scanf("%d\n", &n);
    printf("%d to the power %d is %f\n", a, n, pow(a,n));
    
    return 0;
}