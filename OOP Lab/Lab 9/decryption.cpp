#include <iostream>
using namespace std;

class DecryptionTechnique {
    public:
    virtual string decrypt(const string& encryptedMessage) const = 0;
    virtual ~DecryptionTechnique() {}
};

class DecryptionTechnique1 : public DecryptionTechnique {
    public:
    string decrypt(const string& encryptedMessage) const override {
        string decryptedMessage;
        for(int i = 0; i < encryptedMessage.length(); i += 2) {
            int ascii = stoi(encryptedMessage.substr(i, 2));
            decryptedMessage += static_cast <char> (ascii);
        }
        return decryptedMessage;
    }
};

class DecryptionTechnique2 : public DecryptionTechnique {
    public:
    string decrypt(const string& encryptedMessage) const override {
        string decryptedMessage;
        for(int i = 0; i < encryptedMessage.length(); i += 2) {
            int ascii = stoi(encryptedMessage.substr(i, 2)) - 2;
            decryptedMessage += static_cast <char> (ascii);
        }
        return decryptedMessage;
    }
};

int main() {
    string encryptedMessage1 = "7269767679";
    string encryptedMessage2 = "7471787881";

    DecryptionTechnique1 technique1;
    cout << "Original message using Technique 1: " << technique1.decrypt(encryptedMessage1) << endl;

    DecryptionTechnique2 technique2;
    cout << "Original message using Technique 2: " << technique2.decrypt(encryptedMessage2) << endl;

    return 0;
}