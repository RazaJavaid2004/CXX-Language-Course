#include <iostream>
using namespace std;

class Student {
    protected:
    int Roll_No;
    public:
    void setRoll(int num);
    void getRoll();
};

class Test : virtual public Student {
    protected:
    int maths, physics;
    public:
    void setMarks(int m1, int m2);
    void getMarks();
};

class Sports : virtual public Student {
    protected:
    int score;
    public:
    void setScore(int sc);
    void getScore();
};

class Result : public Test, public Sports {
    protected:
    int total;
    public:
    void getTotal();
};

void Student :: setRoll(int num) {
    Roll_No = num;
}

void Student :: getRoll() {
    cout << "Roll No: " << Roll_No << endl;
}

void Test :: setMarks(int m1, int m2) {
    maths = m1;
    physics = m2;
}

void Test :: getMarks() {
    cout << "Math Marks: " << maths << endl;
    cout << "Physics Marks: " << physics << endl;
}

void Sports :: setScore(int sc) {
    score = sc;
}

void Sports :: getScore() {
    cout << "PT Score: " << score << endl;
}

void Result :: getTotal() {
    getRoll();
    getMarks();
    getScore();
    cout << "Result: " << maths+physics+score;
}

int main() {
    Result Raza;
    Raza.setRoll(138);
    Raza.setMarks(100, 98);
    Raza.setScore(90);
    Raza.getTotal();
    
    return 0;
}