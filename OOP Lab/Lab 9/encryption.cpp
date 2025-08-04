#include <iostream>
#include <sstream>
using namespace std;

class EncryptionTechnique {
    public:
    virtual string encrypt(const string& message) const = 0;
    virtual ~EncryptionTechnique() {}
};

class EncryptionTechnique1 : public EncryptionTechnique {
    public:
    string encrypt(const string& message) const override {
        ostringstream encryptedMessage;
        for(const auto& ch : message) {
            encryptedMessage << static_cast <int> (ch);
        }
        return encryptedMessage.str();
    }
};

class EncryptionTechnique2 : public EncryptionTechnique {
    public:
    string encrypt(const string& message) const override {
        ostringstream encryptedMessage;
        for(const auto& ch : message) {
            encryptedMessage << (static_cast <int> (ch) + 2);
        }
        return encryptedMessage.str();
    }
};

int main() {
    string message = "HELLO";

    EncryptionTechnique1 technique1;
    cout << "Encrypted message using Technique 1: " << technique1.encrypt(message) << endl;

    EncryptionTechnique2 technique2;
    cout << "Encrypted message using Technique 2: " << technique2.encrypt(message) << endl;

    return 0;
}