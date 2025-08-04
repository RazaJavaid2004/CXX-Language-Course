#include <iostream>
#include <string>
using namespace std;

class student {
    string name;
    int roll_no;
    string semester;
    char section;
    public:
    student(string n, int r, string sem, char sec) : name(n), roll_no(r), semester(sem), section(sec) {}
    string getName() {
        return name;
    }
    int getRoll() {
        return roll_no;
    }
    string getSemester() {
        return semester;
    }
    char getSection() {
        return section;
    }
    void display();
};

void student :: display() {
    cout << "Name: " << getName() << endl;
    cout << "Roll No: " << getRoll() << endl;
    cout << "Semester: " << getSemester() << endl;
    cout << "Section: " << getSection() << endl;
}

int main() {
    student students[4] = {
        student("Raza", 138, "Spring 2025", 'A'),
        student("Haris", 127, "Spring 2025", 'C'),
        student("Rafey", 140, "Spring 2025", 'B'),
        student("Muhammad", 148, "Spring 2025", 'A')
    };

    for(int i = 0; i < 4; i++) {
        if(students[i].getSection() == 'A') {
            students[i].display();
        }
    }

    return 0;
}