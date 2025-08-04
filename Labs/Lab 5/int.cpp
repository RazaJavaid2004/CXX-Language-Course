#include <iostream>
using namespace std;

class Base {
    int privateInt;
protected:
    int protectedInt;
public:
    int publicInt;
    void setPublicInt(int pub) {
        publicInt = pub;
    }
    void setProtectedInt(int pro) {
        protectedInt = pro;
    }
    void setPrivateInt(int pri) {
        privateInt = pri;
    }
    int getPublicInt() const {
        return publicInt;
    }
    int getProtectedInt() const {
        return protectedInt;
    }
    int getPrivateInt() const {
        return privateInt;
    }
};

class publicChild : public Base {
public:
    void setMembers() {
        // publicInt (public) and protectedInt (protected) are accessible within this class
        publicInt = 10;
        protectedInt = 20;
        setPrivateInt(30);   // getter is used because private members are not inheritable
    }
};

class protectedChild : protected Base {
public:
    void setMembers() {
        // all members are inherited as protected and are accessible within this class
        publicInt = 10;
        protectedInt = 20;
        setPrivateInt(30);   // getter is used because private members are not inheritable, moreover getter is also protected
    }
};

class privateChild : private Base {
public:
    void setMembers() {
        // all members are inherited as private and are accessible within this class
        publicInt = 10;
        protectedInt = 20;
        setPrivateInt(30);  // getter is used because private members are not inheritable, moreover getter is also private
    }
};

int main() {
    publicChild pub;
    pub.setMembers();
    cout << "publicChild - publicInt: " << pub.publicInt << ", protectedInt (getter): " << pub.getProtectedInt() << ", privateInt (getter): " << pub.getPrivateInt() <<endl;
    // due to public inheritance, all data members and methods are accessible in the main function except protectedInt (protected) and privateInt (private)

    protectedChild pro;
    pro.setMembers();
    // due to protected inheritance, members cannot be accessed in the main function, not even getters and setters

    privateChild pri;
    pri.setMembers();
    // due to private inheritance, members cannot be accessed in the main function, not even getters and setters

    return 0;
}