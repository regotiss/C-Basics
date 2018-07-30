#include <stdio.h>
//number -> 1 : Apple Milk shake
//number -> 2 : Banana Milk Shake
//number -> 3 : Pineapple Juice
//number -> 4 : Mango Juice
//number -> any other : Sorry..no such option

int main() {
    int number;
    printf("Enter your option(1-4): ");
    scanf("%d", &number);
    
    switch (number) {
        case 1:
            printf("Apple Milk shake\n");
            break;
        case 2:
            printf("Banana Milk shake\n");
            break;
        case 3:
            printf("Pineapple Juice\n");
            break;
        case 4:
            printf("Mango Juice\n");
            break;
        default:
            printf("Sorry..no such option\n");
            break;
    }
    return 0;
}
