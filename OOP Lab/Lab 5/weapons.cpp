#include <iostream>
using namespace std;

class weapons {
    public:
    void weaponsDescription() const {
        cout << "Weapons are used to inflict harm or damaage" << endl;
    }
};

class hotWeapons : public weapons {
    public:
    void hotWeaponsDescription() const {
        cout << "Hot Weapons use gunpowder or other explosive materials" << endl;
    }
};

class bombs : public hotWeapons {
    public:
    void bombsDescription() const {
        cout << "Bombs blow up" << endl;
    }
};

class nuclearBombs : public bombs {
    public:
    void nuclearBombsDescription() const {
        cout << "Nuclear Bombs use Nuclear Fissin and Nuclear Fusion" << endl;
    }
};

int main() {
    nuclearBombs nb;

    cout << "Weapons Description: " << endl;
    nb.weaponsDescription();

    cout << "Hot Weapons Description: " << endl;
    nb.hotWeaponsDescription();

    cout << "Bombs Description: " << endl;
    nb.bombsDescription();

    cout << "Nuclear Bombs Description: " << endl;
    nb.nuclearBombsDescription();

    return 0;
}