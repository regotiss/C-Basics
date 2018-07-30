#include <stdio.h>
//raining -> n(no) : go for shopping
//raining -> y(yes) : keep calm and stay at home
//raining -> any other : not getting

int main() {
    char raining;
    printf("is it raining(y/n)? ");
    scanf("%c", &raining);
    
    if(raining == 'n')
        printf("Go for shopping\n");
    else if(raining == 'y')
        printf("keep calm and stay at home\n");
    else
        printf("not getting\n");
    return 0;
}
