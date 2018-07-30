//-----------------------------
//input     :   5
//output    :   0 1 2 3 4
//-----------------------------
//input     :   2
//output    :   0 1
//-----------------------------

#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    
    int runner;
    for (runner = 0; runner < number; runner++) {
        printf("%d ", runner);
    }
    printf("\n");
    return 0;
}
