#include <stdio.h>

struct person
{
    char name[10];
    int age;
};
int main() {
    struct person person1;
    printf("Enter name of person and age : ");
    scanf("%s %d", person1.name, &person1.age);
    
    printf("Hello %s. Your age : %d\n", person1.name, person1.age);
    return 0;
}
