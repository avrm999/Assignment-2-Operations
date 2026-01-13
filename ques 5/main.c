#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

//initially we took a = 5 and b = 10 but this programs swaps their values to a = 10 and b = 5
