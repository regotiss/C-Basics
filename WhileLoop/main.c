//------------------------------------------
//input     :   5
//output    :   5 10 15 20 25 30 35 40 45 50
//5*1 = 5, 5*2 = 10 ....... 5*10 = 50
//------------------------------------------
//input     :   2
//output    :   2 4 6 8 10 12 14 16 18 20
//------------------------------------------

#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    
    int runner = 1;
    while(runner <= 10)
    {
        printf("%d ", number * runner);
        runner++;
    }
    printf("\n");
    return 0;
}
