#include <stdio.h>
#include <stdlib.h>

int main() {
    int *marks, size, index;
    printf("Enter no of students: ");
    scanf("%d", &size);
    
    marks = (int *)malloc(size * sizeof(int));
    
    for(index = 0; index < size; index++)
    {
        printf("Enter marks of student %d: ", index + 1);
        scanf("%d", &marks[index]);
    }
    
    int total = 0;
    for (index = 0; index < size; index++) {
        total = total + marks[index];
    }
    printf("Total marks: %d\n", total);
    return 0;
}
