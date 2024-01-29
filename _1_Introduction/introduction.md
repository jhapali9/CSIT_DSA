# Types of Data Types in Programming

In programming, data types categorize the types of values a variable can hold. These can be broadly classified into three main categories: primitive, derived, and user-defined data types.

## 1. Primitive Data Types

Primitive data types are the basic building blocks provided by the programming language. They are used to store simple values like integers, floating-point numbers, characters, and boolean values. Examples of primitive data types include:

- **Integer Types:** `int`, `short`, `long`
- **Floating-Point Types:** `float`, `double`
- **Character Type:** `char`
- **Boolean Type:** `bool`

## 2. Derived Data Types

In C programming, derived data types are created by combining primitive data types or other derived data types. Structure, array and pointer are derived data types in C.

## 3. User-defined Data Types

In C programming, user-defined data types allow the creation of new types using `typedef`. Similarly, in C++, user-defined data types are commonly created using classes. 


# Primitive Data Types in C Program Demonstration

In C programming, primitive data types are the fundamental building blocks for storing and manipulating data. The following is a simple demonstration of some common primitive data types in C:

```c
#include <stdio.h>

int main() {
    // Integer data types
    int integerNumber = 10;
    short shortNumber = 5;
    long longNumber = 1000000;
    char character = 'A';

    // Floating-point data types
    float floatingPointNumber = 3.14;
    double doublePrecisionNumber = 2.71828;

    // Displaying values
    printf("Integer: %d\n", integerNumber);
    printf("Short: %d\n", shortNumber);
    printf("Long: %ld\n", longNumber);
    printf("Character: %c\n", character);
    printf("Float: %f\n", floatingPointNumber);
    printf("Double: %lf\n", doublePrecisionNumber);

    return 0;
}

```

# Derived Data Types in C Program Demonstration

In C programming, derived data types are created by combining primitive data types or other derived data types. The following is a simple demonstration of some common derived data types in C:

```c
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

```

# User-Defined Data Type in C Program Demonstration

In C programming, user-defined data types allow the creation of new types using `typedef`. The following is a simple demonstration of a user-defined data type in C:

```c
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

```

# User-Defined Data Type in C++ Program Demonstration

In C++, user-defined data types are commonly created using classes. The following is a simple demonstration of a user-defined data type in C++:

```cpp
#include <iostream>
#include <string>

// Define a class representing a student
class Student {
public:
    // Member variables
    std::string name;
    int age;
    float grade;

    // Member function to display student information
    void displayInfo() {
        std::cout << "Student Information:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }
};

int main() {
    // Create an instance of the user-defined class
    Student student1;
    student1.name = "John Doe";
    student1.age = 20;
    student1.grade = 85.5;

    // Display student information using the member function
    student1.displayInfo();

    return 0;
}

```

# Dynamic Memory Allocation in C Program with `calloc` and `realloc`

This C program demonstrates the use of dynamic memory allocation, including initial allocation using `calloc` and resizing using `realloc`. The program prompts the user to input the initial size of an integer array, allocates memory, reads user-input elements, displays them, resizes the array based on user input, reads additional elements, and finally frees the allocated memory.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // 1. User input for the initial size of the array
    printf("Enter the initial size of the array: ");
    scanf("%d", &n);

    // 2. Dynamically allocate memory for an integer array using calloc
    int *dynamicArray = (int *)calloc(n, sizeof(int));

    // 3. Check if memory allocation is successful
    if (dynamicArray == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // 4. Input elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &dynamicArray[i]);
    }

    // 5. Display the elements
    printf("Entered elements are: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", dynamicArray[i]);
    }

    // 6. Resize the array using realloc
    int newSize;
    printf("\nEnter the new size of the array: ");
    scanf("%d", &newSize);

    // 7. Resize the array using realloc
    int *resizedArray = (int *)realloc(dynamicArray, newSize * sizeof(int));

    // 8. Check if resizing is successful
    if (resizedArray == NULL) {
        printf("Memory reallocation failed.\n");
        free(dynamicArray);
        return 1;
    }

    // 9. Input additional elements
    printf("Enter %d additional elements:\n", newSize - n);
    for (int i = n; i < newSize; ++i) {
        scanf("%d", &resizedArray[i]);
    }

    // 10. Display all elements in the resized array
    printf("All elements after resizing are: ");
    for (int i = 0; i < newSize; ++i) {
        printf("%d ", resizedArray[i]);
    }

    // 11. Free dynamically allocated memory
    free(resizedArray);

    return 0;
}

```

# Dynamic Memory Allocation in C++ Program with `new` and `delete`

This C++ program demonstrates the use of dynamic memory allocation, including initial allocation using `new` and resizing using `new[]` and `delete[]`. The program prompts the user to input the initial size of an integer array, allocates memory using `new`, reads user-input elements, displays them, resizes the array using `new[]`, reads additional elements, and finally frees the allocated memory using `delete` for a single variable and `delete[]` for an array.

```cpp
#include <iostream>

int main() {
    int n;

    // 1. User input for the initial size of the array
    std::cout << "Enter the initial size of the array: ";
    std::cin >> n;

    // 2. Dynamically allocate memory for an integer array using new
    int* dynamicArray = new int[n];

    // 3. Input elements from the user
    std::cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> dynamicArray[i];
    }

    // 4. Display the elements
    std::cout << "Entered elements are: ";
    for (int i = 0; i < n; ++i) {
        std::cout << dynamicArray[i] << ' ';
    }

    // 5. Resize the array using new[]
    int newSize;
    std::cout << "\nEnter the new size of the array: ";
    std::cin >> newSize;

    // 6. Resize the array using new[]
    int* resizedArray = new int[newSize];

    // 7. Copy elements from the old array to the resized array
    for (int i = 0; i < n && i < newSize; ++i) {
        resizedArray[i] = dynamicArray[i];
    }

    // 8. Delete the old array using delete[]
    delete[] dynamicArray;

    // 9. Input additional elements
    std::cout << "Enter " << newSize - n << " additional elements:\n";
    for (int i = n; i < newSize; ++i) {
        std::cin >> resizedArray[i];
    }

    // 10. Display all elements in the resized array
    std::cout << "All elements after resizing are: ";
    for (int i = 0; i < newSize; ++i) {
        std::cout << resizedArray[i] << ' ';
    }

    // 11. Delete the resized array using delete[]
    delete[] resizedArray;

    return 0;
}

```