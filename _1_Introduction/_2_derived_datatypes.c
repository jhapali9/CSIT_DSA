// derived data types in c
#include <stdio.h>

// Structure definition
struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    // Array declaration and initialization
    int numbers[5] = {1, 2, 3, 4, 5};

    // Structure variable initialization
    struct Student student1 = {"John Doe", 20, 85.5};

    // Pointer declaration and assignment
    int *ptr = numbers;

    // Displaying values
    printf("Array Elements: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", numbers[i]);
    }

    printf("\n\nStudent Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Grade: %f\n", student1.grade);

    printf("\nPointer Example:\n");
    printf("Value at pointer: %d\n", *ptr);

    return 0;
}
