#include <stdio.h>

int main(){
    
    int x = 12;
    int y = 9;
    int z = 10;
    
    int sum = x + y + z;
    
    int n = 3;
    
    float mean = (double)sum/n;
    
    printf("%.2f", mean);
    
    return 0;
    
}