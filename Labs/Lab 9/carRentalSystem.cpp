#include <iostream>
#include <vector>
using namespace std;

class Vehicle {
    protected:
    int carId;
    string brand;
    string model;
    bool available;
    public:
    Vehicle(int c = 0, const string& b = "NA", const string& m = "NA", bool avail = false) : carId(c), brand(b), model(m), available(avail) {}
    virtual bool isAvailable() const = 0;
    virtual void rent() = 0;
    virtual void returnVehicle() = 0;
    void displayInfo() const {
        cout << "Car ID: " << carId << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Available: " << (available ? "Yes" : "No") << endl;
    }
    void setCarId(int c) {
        carId = c;
    }
    void setBrand(const string& b) {
        brand = b;
    }
    void setModel(const string& m) {
        model = m;
    }
    int getCarId() const {
        return carId;
    }
    string getBrand() const {
        return brand;
    }
    string getModel() const {
        return model;
    }
};

class Car : public Vehicle {
    public:
    Car(int c, const string& b, const string& m, bool avail) : Vehicle(c, b, m, avail) {}
    bool isAvailable() const override {
        return available;
    }
    void rent() override {
        if(available) {
            available = false;
            cout << "Vehicle with ID: " << carId << " has been Rented!" << endl;
        }
        else cout << "Vehicle with ID: " << carId << " is Not Available!" << endl;
    }
    void returnVehicle() override {
        if(!available) {
            available = true;
            cout << "Vehicle with ID: " << carId << " has been returned!" << endl;
        }
        else cout << "Vehicle with ID: " << carId << " was Not Rented!" << endl;
    }
};

class RentalSystem {
    vector <Vehicle*> vehicles;
    public:
    void addVehicle(Vehicle* v) {
        vehicles.push_back(v);
    }
    void rentVehicle(int id) {
        bool found = false;
        for(const auto& v : vehicles) {
            if(v->isAvailable() && v->getCarId() == id) {
                v->rent();
                return;
            }
        }
        if(!found) cout << "No Vehicle with ID: " << id << " is Available for Rent!" << endl;
    }
    void returnVehicle(int id) {
        bool found = false;
        for(const auto& v : vehicles) {
            if(!v->isAvailable() && v->getCarId() == id) {
                v->returnVehicle();
                found = true;
                break;
            }
        }
        if(!found) cout << "No Rented Vehicle with ID: " << id << " Found!" << endl;
    }
    void displayVehicles() const {
        for(const auto& v : vehicles) {
            v->displayInfo();
            cout << endl;
        }
    }
    ~RentalSystem() {
        for(const auto& v : vehicles) {
            delete v;
        }
    }
};

class Customer {
    public:
    void rentVehicle(RentalSystem& system, int id) {
        system.rentVehicle(id);
    }
    void returnVehicle(RentalSystem& system, int id) {
        system.returnVehicle(id);
    }
};

int main() {
    RentalSystem system;

    Vehicle* vehicles[] = {
        new Car(1, "Toyota", "Corolla", true),
        new Car(2, "Honda", "Civic", true),
        new Car(3, "Suzuki", "Mehran", false),
    };

    for (auto& v : vehicles) {
        system.addVehicle(v);
    }

    Customer customer;

    cout << "-----------------------------" << endl;
    cout << "Available Vehicles:" << endl;
    system.displayVehicles();

    cout << "-----------------------------" << endl;
    cout << "Customer renting a vehicle (Car ID: 1):" << endl;
    customer.rentVehicle(system, 1);

    cout << "-----------------------------" << endl;
    cout << "Updated Vehicle List:" << endl;
    system.displayVehicles();

    cout << "-----------------------------" << endl;
    cout << "Customer returning a vehicle (Car ID: 1):" << endl;
    customer.returnVehicle(system, 1);

    cout << "-----------------------------" << endl;
    cout << "Final Vehicle List:" << endl;
    system.displayVehicles();
    cout << "-----------------------------" << endl;

    return 0;
}