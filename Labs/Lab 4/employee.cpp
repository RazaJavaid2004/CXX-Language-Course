#include <iostream>
#include <cstring>
using namespace std;

class employee {
    char* employeeName;
    const int employeeId;
    public:
    employee(const char* name = NULL, int id = 0) : employeeId(id) {
        if(employeeName == NULL) exit(1);
        employeeName = new char[strlen(name) + 1];
        strcpy(employeeName, name);
    }
    void setEmployeeName(const char* name) {
        if(employeeName != NULL) delete[] employeeName;
        employeeName = new char[strlen(name) + 1];
        strcpy(employeeName, name);
    }
    char* getEmployeeName()  {
        return employeeName;
    }
    int getEmployeeId()  {
        return employeeId;
    }
    ~employee() {
        delete[] employeeName;
    }
};

int main() {
    employee e[3] = {
        employee("Rafey", 100),
        employee("Yahya", 200),
        employee("Haris", 300)
    };

    for(int i = 0; i < 3; i++) {
        cout << "Details for Employee " << i + 1 << endl;
        cout << "Name: " << e[i].getEmployeeName() << endl;
        cout << "ID: " << e[i].getEmployeeId() << endl;
        cout << endl;
    }

    e[0].setEmployeeName("Muhammad");
    cout << "New Employee: " << e[0].getEmployeeName() << endl;
    cout << "ID: " << e[0].getEmployeeId() << endl;

    return 0;
}