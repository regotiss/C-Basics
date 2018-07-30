#include <stdio.h>

int main() {
    int marks[5], index;
    
    for(index = 0; index < 5; index++)
    {
        printf("Enter marks of student %d: ", index + 1);
        scanf("%d", &marks[index]);
    }
    
    int total = 0;
    for (index = 0; index < 5; index++) {
        total = total + marks[index];
    }
    printf("Total marks: %d\n", total);
    return 0;
}
