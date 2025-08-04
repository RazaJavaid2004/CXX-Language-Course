#include <iostream>
using namespace std;

class teacher {
    protected:
    string name;
    const int age;
    string institute;
    public:
    teacher(const string& n = "", int a = 0, const string& i = "") : name(n), age(a), institute(i) {}
    void setName(const string& n) {
        name = n;
    }
    void setInstitute(const string& i) {
        institute = i;
    }
    string getName() const {
        return name;
    }
    const int getAge() const {
        return age;
    }
    string getInstitute() const {
        return institute;
    }
};

class humanitiesTeacher : public teacher {
    string department;
    string courseName;
    string designation;
    public:
    humanitiesTeacher(const string& n, int a, const string& i, const string& dep = "", const string& c = "", const string& des = "") : teacher(n, a, i) , department(dep), courseName(c), designation(des) {}
    void setDepartment(const string& dep) {
        department = dep;
    }
    void setCourseName(const string& c) {
        courseName = c;
    }
    void setDesignation(const string& des) {
        designation = des;
    }
    string getDepartment() const {
        return department;
    }
    string getCourseName() const {
        return courseName;
    }
    string getDesignation() const {
        return designation;
    }
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Institute: " << institute << endl;
        cout << "Department: " << department << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Designation: " << designation << endl;
    }
};

class scienceTeacher : public teacher {
    string department;
    string courseName;
    string designation;
    public:
    scienceTeacher(const string& n, int a, const string& i, const string& dep = "", const string& c = "", const string& des = "") : teacher(n, a, i) , department(dep), courseName(c), designation(des) {}
    void setDepartment(const string& dep) {
        department = dep;
    }
    void setCourseName(const string& c) {
        courseName = c;
    }
    void setDesignation(const string& des) {
        designation = des;
    }
    string getDepartment() const {
        return department;
    }
    string getCourseName() const {
        return courseName;
    }
    string getDesignation() const {
        return designation;
    }
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Institute: " << institute << endl;
        cout << "Department: " << department << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Designation: " << designation << endl;
    }
};

class mathsTeacher : public teacher {
    string department;
    string courseName;
    string designation;
    public:
    mathsTeacher(const string& n, int a, const string& i, const string& dep = "", const string& c = "", const string& des = "") : teacher(n, a, i) , department(dep), courseName(c), designation(des) {}
    void setDepartment(const string& dep) {
        department = dep;
    }
    void setCourseName(const string& c) {
        courseName = c;
    }
    void setDesignation(const string& des) {
        designation = des;
    }
    string getDepartment() const {
        return department;
    }
    string getCourseName() const {
        return courseName;
    }
    string getDesignation() const {
        return designation;
    }
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Institute: " << institute << endl;
        cout << "Department: " << department << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Designation: " << designation << endl;
    }
};

int main() {
    string name;
    int age;
    string institute;
    string department;
    string courseName;
    string designation;

    cout << "Enter Details for Science Teacher: " << endl;
    cout << "Enter the Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter the Institute: ";
    getline(cin, institute);
    cout << "Enter the Department: ";
    getline(cin, department);
    cout << "Enter the Course Name: ";
    getline(cin, courseName);
    cout << "Enter the Designation: ";
    getline(cin, designation);

    scienceTeacher s(name, age, institute, department, courseName, designation);

    cout << "Enter Details for Humanities Teacher: " << endl;
    cout << "Enter the Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter the Institute: ";
    getline(cin, institute);
    cout << "Enter the Department: ";
    getline(cin, department);
    cout << "Enter the Course Name: ";
    getline(cin, courseName);
    cout << "Enter the Designation: ";
    getline(cin, designation);

    humanitiesTeacher h(name, age, institute, department, courseName, designation);

    cout << "Enter Details for Maths Teacher: " << endl;
    cout << "Enter the Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter the Institute: ";
    getline(cin, institute);
    cout << "Enter the Department: ";
    getline(cin, department);
    cout << "Enter the Course Name: ";
    getline(cin, courseName);
    cout << "Enter the Designation: ";
    getline(cin, designation);

    mathsTeacher m(name, age, institute, department, courseName, designation);

    cout << endl;

    s.display();
    cout << endl;

    h.display();
    cout << endl;

    m.display();
    cout << endl;

    return 0;
}