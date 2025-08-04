// Write a program in which a class named student has member variables name, roll_no, 
// semester and section. Create 4 objects of this class to store data of 4 different students, 
// now display data of only those students who belong to section A.

#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int roll_no;
    int semester;
    char section;

    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll No: " << roll_no << std::endl;
        std::cout << "Semester: " << semester << std::endl;
        std::cout << "Section: " << section << std::endl;
    }
};

int main() {
    Student students[4];

    // Initializing data for 4 students
    students[0] = {"Alice", 101, 1, 'A'};
    students[1] = {"Bob", 102, 1, 'B'};
    students[2] = {"Carol", 103, 1, 'A'};
    students[3] = {"Dave", 104, 1, 'C'};

    // Display data of students in section A
    for (int i = 0; i < 4; ++i) {
        if (students[i].section == 'A') {
            students[i].display();
            std::cout << std::endl;
        }
    }

    return 0;
}