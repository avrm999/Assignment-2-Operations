#include <stdio.h>
#include <math.h>

int main(){
    
    char name = 'A';
    int age = 19;
    float marks = 36.5;
    double random = 23;
    
    int size = sizeof(random);
    
    printf("size : %d", size);
    
    return 0;
}