// user defined data type in c

#include <stdio.h>

// Define a new type using typedef
typedef struct {
    char name[50];
    int age;
    float grade;
} Student;

int main() {
    // Declare a variable of the user-defined type
    Student student1 = {"John Doe", 20, 85.5};

    // Displaying values
    printf("Student Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Grade: %f\n", student1.grade);

    return 0;
}
