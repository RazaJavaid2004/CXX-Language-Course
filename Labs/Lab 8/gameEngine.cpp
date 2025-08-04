#include <iostream>
#include <stdexcept>
using namespace std;

class Character {
protected:
    string name;
    int level;
    double health;
public:
    Character(const string& n = "", int l = 0, double h = 100) : name(n), level(l), health(h) {}
    virtual void display() const {
        cout << "Name: " << name << endl;
        cout << "Level: " << level << endl;
        cout << "Health: " << health << endl;
    }
    virtual void attack() const {
        cout << name << " attacks generically!" << endl;
    }
    virtual ~Character() {}
    void setName(const string& n) {
        name = n;
    }
    void setLevel(int l) {
        if(l <= 0) {
            throw invalid_argument("Level cannot be Less Than or Equal to Zero!");
        }
        level = l;
    }
    void setHealth(double h) {
        if(h <= 0) {
            throw invalid_argument("Health cannot be Less Than or Equal to Zero!");
        }
        health = h;
    }
    string getName() const {
        return name;
    }
    int getLevel() const {
        return level;
    }
    double getHealth() const {
        return health;
    }
};

class Warrior : virtual public Character {
protected:
    double strength;
public:
    Warrior(const string& n, int l, double h, double s = 0) : Character(n, l, h), strength(s) {}
    void display() const override {
        Character :: display();
        cout << "Strength: " << strength << endl;
    }
    void attack() const override {
        cout << name << " performs a powerful SLASH attack!" << endl;
    }
    void setStrength(double s) {
        if(s <= 0) {
            throw invalid_argument("Strength cannot be Less Than or Equal to Zero!");
        }
        strength = s;
    }
    double getStrength() const {
        return strength;
    }
};

class Mage : virtual public Character {
protected:
    double intelligence;
public:
    Mage(const string& n, int l, double h, double i = 0) : Character(n, l, h), intelligence(i) {}
    void display() const override {
        Character :: display();
        cout << "Intelligence: " << intelligence << endl;
    }
    void attack() const override {
        cout << name << " casts a FIREBALL!" << endl;
    }
    void setIntelligence(double i) {
        if(i <= 0) {
            throw invalid_argument("Intelligence cannot be Less Than or Equal to Zero!");
        }
        intelligence = i;
    }
    double getIntelligence() const {
        return intelligence;
    }
};

class Archer : public Character {
protected:
    double dexterity;
public:
    Archer(const string& n, int l, double h, double d = 0) : Character(n, l, h), dexterity(d) {}
    void display() const override {
        Character :: display();
        cout << "Dexterity: " << dexterity << endl;
    }
    void attack() const override {
        cout << name << " shoots a RAPID SHOT!" << endl;
    }
    void setDexterity(double d) {
        if(d <= 0) {
            throw invalid_argument("Dexterity cannot be Less Than or Equal to Zero!");
        }
        dexterity = d;
    }
    double getDexterity() const {
        return dexterity;
    }
};

class NPC : public Character {
public:
    NPC(const string& n) : Character(n, 1, 100) {}
    void display() const override {
        Character :: display();
    }
    void Speak() const {
        cout << name << " says: 'Welcome traveler!'" << endl;
    }
};

class Mighty : public Warrior, public Mage {
public:
    Mighty(string n, int l, double h, double s, double i) 
        : Warrior(n, l, h, s), Mage(n, l, h, i), Character(n, l, h) {}
    void display() const override {
        Character :: display();
        cout << "Strength: " << strength << endl;
        cout << "Intelligence: " << intelligence << endl;
    }
    void attack() const override {
        cout << name << " unleashes a powerful SLASH followed by a FIREBALL!" << endl;
    }
};

int main() {
    try {
        Character* characters[5];

        characters[0] = new Warrior("Warrior King", 5, 200, 80);
        characters[1] = new Mage("Wizard Master", 6, 150, 90);
        characters[2] = new Archer("Eagle Eye", 4, 170, 85);
        characters[3] = new NPC("Village Elder");
        characters[4] = new Mighty("Mighty Hero", 10, 300, 90, 95);

        for (int i = 0; i < 5; ++i) {
            characters[i]->display();
            characters[i]->attack();
            cout << "--------------------------------------" << endl;
        }

    for (int i = 0; i < 5; ++i) {
        delete characters[i];
    }
    }
    catch(const invalid_argument& e) {
        cerr << e.what() << endl;
    }
    
    return 0;
}