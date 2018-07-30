#include <stdio.h>
int add(int, int);

int main() {
    int number1, number2;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &number1, &number2);
    
    int result = add(number1, number2);
    
    printf("Addition is %d\n", result);
    printf("\nDone\n");
    return 0;
}

int add(int number1, int number2) {
    
    int result = number1 + number2;
    
    return result;
}

