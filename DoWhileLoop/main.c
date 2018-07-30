//-----------------------------
//Juice selection until user want
//------------------------------

#include <stdio.h>

int main() {
    int number;
    
    do
    {
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
        printf("Enter 1 to continue...");
        scanf("%d", &number);
    }while (number == 1);
    return 0;
}
