#include <iostream>
using namespace std;

class Vehicle {
    protected:
    string type;
    string make;
    string model;
    string color;
    int year;
    int milesDriven;
    public:
    Vehicle(const string& t = "", const string& ma = "", const string& mo = "", const string& c = "", int y = 0, int mi = 0) : type(t), make(ma), model(mo), color(c), year(y), milesDriven(mi) {}
    virtual ~Vehicle() {}
    virtual void display() const {
        cout << "Type: " << type << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Year: " << year << endl;
        cout << "Miles Driven: " << milesDriven << " miles" << endl;
    }
    void setType(const string& t) {
        type = t;
    }
    void setMake(const string& ma) {
        make = ma;
    }
    void setModel(const string& mo) {
        model = mo;
    }
    void setColor(const string& c) {
        color = c;
    }
    void setYear(int y) {
        year = y;
    }
    void setMilesDriven(int mi) {
        milesDriven = mi;
    }
    string getType() const {
        return type;
    }
    string getMake() const {
        return make;
    }
    string getModel() const {
        return model;
    }
    string getColor() const {
        return color;
    }
    int getYear() const {
        return year;
    }
    int getMilesDriven() const {
        return milesDriven;
    }
};

class GasVehicle : virtual public Vehicle {
    protected:
        double fuelTankSize;
    public:
    GasVehicle(const string& t, const string& ma, const string& mo, const string& c, int y, int mi, double f = 0) : Vehicle(t, ma, mo, c, y, mi), fuelTankSize(f) {}
    void display() const override {
        Vehicle :: display();
        cout << "Fuel Tank Size: " << fuelTankSize << " litres" << endl;
    }
    void setFuelTankSize(double f) {
        fuelTankSize = f;
    }
    double getFuelTankSize() const {
        return fuelTankSize;
    }
};

class ElectricVehicle : virtual public Vehicle {
    protected:
    double energyStorage;
    public:
    ElectricVehicle(const string& t, const string& ma, const string& mo, const string& c, int y, int mi, double e = 0) : Vehicle(t, ma, mo, c, y, mi), energyStorage(e) {}
    void display() const {
        Vehicle :: display();
        cout << "Energy Storage: " << energyStorage << " kWh" << endl;
    }
    void setEnergyStorage(double e) {
        energyStorage = e;
    }
    double getEnergyStorage() const {
        return energyStorage;
    }
};

class HighPerformance : public GasVehicle {
    protected:
    double horsePower;
    double topSpeed;
    public:
    HighPerformance(const string& t , const string& ma, const string& mo, const string& c, int y, int mi, double f, double h = 0, double ts = 0) : GasVehicle(t, ma, mo, c, y, mi, f), horsePower(h), topSpeed(ts) {}
    void display() const override {
        GasVehicle :: display();
        cout << "Horse Power: " << horsePower << " hp" << endl;
        cout << "Top Speed: " << topSpeed << " m/s" << endl;
    }
    void setHorsePower(double h) {
        horsePower = h;
    }
    void setTopSpeed(double ts) {
        topSpeed = ts;
    }
    double getHorsePower() const {
        return horsePower;
    }
    double getTopSpeed() const {
        return topSpeed;
    }
};

class HeavyVehicle : public GasVehicle, public ElectricVehicle {
protected:
    double maxWeight;
    int numWheels;
    double length;
public:
    HeavyVehicle(const string& t, const string& ma, const string& mo, const string& c, int y, int mi, double f, double e, double mw = 0, int nw = 0, double l = 0) : Vehicle(t, ma, mo, c, y, mi), GasVehicle(t, ma, mo, c, y, mi, f), ElectricVehicle(t, ma, mo, c, y, mi, e), maxWeight(mw), numWheels(nw), length(l) {}
    void display() const override {
        Vehicle :: display();
        cout << "Fuel Tank Size: " << fuelTankSize << " litres" << endl;
        cout << "Energy Storage: " << energyStorage << " kWh" << endl;
        cout << "Max Weight: " << maxWeight << " tons" << endl;
        cout << "Number of Wheels: " << numWheels << endl;
        cout << "Length: " << length << " meters" << endl;
    }
    void setMaxWeight(double mw) {
        maxWeight = mw;
    }
    void setNumWheels(int nw) {
        numWheels = nw;
    }
    void setLength(double l) {
        length = l;
    }
    double getMaxWeight() const {
        return maxWeight;
    }
    int getNumWheels() const {
        return numWheels;
    }
    double getLength() const {
        return length;
    }
};

class SportsCar : public HighPerformance {
    string gearBox;
    string driveSystem;
    public:
    SportsCar(const string& t , const string& ma, const string& mo, const string& c, int y, int mi, double f, double h, double ts, const string& gb = "", const string& ds = "") : HighPerformance(t, ma, mo, c, y, mi, f, h, ts), gearBox(gb), driveSystem(ds) {}
    void display() const override {
        HighPerformance :: display();
        cout << "Gear Box: " << gearBox << endl;
        cout << "Drive System: " << driveSystem << endl;
    }
    void setGearBox(const string& gb) {
        gearBox = gb;
    }
    void setDriveSystem(const string& ds) {
        driveSystem = ds;
    }
    string getGearBox() const {
        return gearBox;
    }
    string getDriveSystem() const {
        return driveSystem;
    }
};

class ConstructionTruck : public HeavyVehicle {
    string cargo;
    public:
    ConstructionTruck(const string& t, const string& ma, const string& mo, const string& c, int y, int mi, double f, double e, double mw, int nw, double l, const string& ca = "") : HeavyVehicle(t, ma, mo, c, y, mi, f, e, mw, nw, l), cargo(ca) {}
    void display() const override {
        HeavyVehicle :: display();
        cout << "Cargo: " << cargo << endl;
    }
    void setCargo(const string& ca) {
        cargo = ca;
    }
    string getCargo() const {
        return cargo;
    }
};

class Bus : public HeavyVehicle {
    int numSeats;
public:
    Bus(const string& t, const string& ma, const string& mo, const string& c, int y, int mi, double f, double e, double mw, int nw, double l, int ns = 0) : Vehicle(t, ma, mo, c, y, mi) ,HeavyVehicle(t, ma, mo, c, y, mi, f, e, mw, nw, l), numSeats(ns) {}
    void display() const override {
        HeavyVehicle :: display();
        cout << "Number of Seats: " << numSeats << endl;
    }
};

int main() {
    Bus myBus("Public Transport", "Mercedes", "Sprinter", "White", 2022, 50000, 80, 60, 10, 6, 12, 50);
    myBus.display();

    return 0;
}