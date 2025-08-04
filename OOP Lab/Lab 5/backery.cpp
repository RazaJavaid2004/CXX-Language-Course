#include <iostream>
#include <cctype>
using namespace std;

class Item {
    protected:
    string name;
    int quantity;
    public:
    Item(const string& n = "", int q = 0) : name(n), quantity(q) {}
    void setName(const string& n) {
        name = n;
    }
    void setQuantity(int q) {
        quantity = q;
    }
    string getName() const {
        return name;
    }
    int getQuantity() const {
        return quantity;
    }
    virtual double calculatePrice() const = 0;
};

class BakedGoods : public Item {
    protected:
    const double discount;
    public:
    BakedGoods(const string& n, int q) : Item(n, q), discount(0.10) {}
    const double getDiscount() const {
        return discount;
    }
};

class Cakes : public BakedGoods {
    const double price;
    public:
    Cakes(const string& n, int q) : BakedGoods(n, q), price(600) {}
    const double getPrice() const {
        return price;
    }
    virtual double calculatePrice() const override {
        return quantity * price * (1 - discount);
    }
};

class Bread : public BakedGoods {
    const double price;
    public:
    Bread(const string& n, int q) : BakedGoods(n, q), price(200) {}
    const double getPrice() const {
        return price;
    }
    virtual double calculatePrice() const override {
        return quantity * price * (1 - discount);
    }
};

class Drinks : public Item {
    const double discount;
    const double price;
    public:
    Drinks(const string& n, int q, double d = 0.05, double p = 100) : Item(n, q), discount(d), price(p) {}
    const double getDiscount() const {
        return discount;
    }
    const double getPrice() const {
        return price;
    }
    virtual double calculatePrice() const override {
        return quantity * price * (1 - discount);
    }
};

int main() {
    int itemsNum;
    cout << "Enter the Number of Items: ";
    cin >> itemsNum;
    cin.ignore();

    Item* items[itemsNum];

    for(int i = 0; i < itemsNum; i++) {
        string itemType;
        string itemName;
        int itemQuantity;

        cout << "Enter the Item Type (cake, bread, drink): ";
        getline(cin, itemType);
        for(char& c : itemType) {
            c = tolower(c);
        }
        cout << "Enter the Item Name: ";
        getline(cin, itemName);
        cout << "Enter the Item Quantity: ";
        cin >> itemQuantity;
        cin.ignore();

        if(itemType == "cake") {
            items[i] = new Cakes(itemName, itemQuantity);
        }
        else if(itemType == "bread") {
            items[i] = new Bread(itemName, itemQuantity);
        }
        else if(itemType == "drink") {
            items[i] = new Drinks(itemName, itemQuantity);
        }
        else {
            cout << "Invalid Item Type!" << endl;
            i--;
        }
    }

    cout << "You Ordered: " << endl;
    for(int i = 0; i < itemsNum; i++) {
        cout << "Item Name: " << items[i]->getName() << endl;
        cout << "Item Quantity: " << items[i]->getQuantity() << endl;
    }

    double totalBill = 0;
    for(int i = 0; i < itemsNum; i++) {
        totalBill += items[i]->calculatePrice();
        delete items[i];
    }

    cout << "Total Bill: Rs " << totalBill << endl;

    return 0;
}