#include <iostream>
using namespace std;

class Student {
    protected:
    int roll_no;
    public:
    void setRoll(int num);
    void getRoll();
};

class Exam : public Student {
    protected:
    int math, physics, chemistry;
    public:
    void setMarks(int m1, int m2, int m3);
    void getMarks();
};

class Result : public Exam {
    float percentage;
    public:
    void display();
};

void Student :: setRoll(int num) {
    roll_no = num;
}

void Student :: getRoll() {
    cout << "Roll No: " << roll_no << endl;
}

void Exam :: setMarks(int m1, int m2, int m3) {
    math = m1;
    physics = m2;
    chemistry = m3;
}

void Exam :: getMarks() {
    cout << "Math Marks: " << math << endl;
    cout << "Physics Marks: " << physics << endl;
    cout << "Chemistry Marks: " << chemistry << endl;
}

void Result :: display() {
    getRoll();
    getMarks();
    cout << "Percentage: " << (math+physics+chemistry) * 100 / 300 << endl;
}

int main() {
    Result Raza;
    Raza.setRoll(400);
    Raza.setMarks(100, 98, 97);
    Raza.display();
    return 0;
}