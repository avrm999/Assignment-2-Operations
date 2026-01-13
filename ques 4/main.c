#include <stdio.h>

//this program shows the use of assignment operators

int main(){
    
    int a = 10;
    int b = 10;
    int c = 10;
    int d = 10;
    int e = 11;
    
    a += 2;
    b -= 2;
    c *= 2;
    d /= 2;
    e %= 2;
    
    
    printf("addition: %d\n", a);
    printf("subtraction: %d\n", b);
    printf("multiplication: %d\n", c);
    printf("division: %d\n", d);
    printf("remainder: %d\n", e);
    
    return 0;
    
}