#include <iostream>
using namespace std;

class Person {
    string name;
    string occupation;
    public:
    Person(const string& n = "", const string& o = "") : name(n), occupation(o) {}
    virtual void draw() {
        cout << "A person can draw in many ways" << endl;
    }
    virtual ~Person() {}
    void setName(const string& n) {
        name = n;
    }
    void setOccupation(const string& o) {
        occupation = o;
    }
    string getName() const {
        return name;
    }
    string getOccupation() const {
        return occupation;
    }
};

class Artist : public Person {
    public:
    Artist(const string& n) : Person(n, "Artist") {}
    void draw() override {
        cout << "An artist can draw with a paint brush" << endl;
    }
};

class Gunman : public Person {
public:
    Gunman(const string& n) : Person(n, "Gunman") {}
    void draw() override {
        cout << "A gunman draws a gun to shoot" << endl;
    }
};

int main() {
    Person* p[2];
    p[0] = new Artist("Ali");
    p[1] = new Gunman("Hassan");

    p[0]->draw();
    p[1]->draw();

    delete p[0];
    delete p[1];

    return 0;
}