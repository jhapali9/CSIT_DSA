// user defined data type in c++

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
