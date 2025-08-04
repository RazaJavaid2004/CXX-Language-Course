#include <iostream>
using namespace std;

class epicClash {
    float* health;
    float* attack_power;
    float* defense;
    public:
    epicClash(int h = 100, int a = 50, int d = 50) {
        health = new float(h);
        attack_power = new float(a);
        defense = new float(d);
    }
    epicClash(const epicClash& obj) {
        health = new float(*obj.health);
        attack_power = new float(*obj.attack_power);
        defense = new float(*obj.defense);
    }
    void setHealth(float h) {
        *health = h;
    }
    void setAttack(float a) {
        *attack_power = a;
    }
    void setDefense(float d) {
        *defense = d;
    }
    float getHealth() {
        return *health;
    }
    float getAttack() {
        return *attack_power;
    }
    float getDefense() {
        return *defense;
    }
    ~epicClash() {
        delete health;
        delete attack_power;
        delete defense;
    }
};

int main() {
    epicClash p1;
    cout << "Character initialized through Default Constructor" << endl;
    cout << "Health: " << p1.getHealth() << endl;
    cout << "Attack Power: " << p1.getAttack() << endl;
    cout << "Defense: " << p1.getDefense() << endl;

    epicClash p2(200, 100, 100);
    cout << "Character initialized through Parameterized Constructor" << endl;
    cout << "Health: " << p2.getHealth() << endl;
    cout << "Attack Power: " << p2.getAttack() << endl;
    cout << "Defense: " << p2.getDefense() << endl;

    epicClash p3(p2);
    cout << "Character initialized through Copy Constructor" << endl;
    cout << "Health: " << p3.getHealth() << endl;
    cout << "Attack Power: " << p3.getAttack() << endl;
    cout << "Defense: " << p3.getDefense() << endl;

    return 0;
}