#include <iostream>
#include <cmath>
using namespace std;

class Vector {
    int x, y;
    public:
    Vector(int a, int b) : x(a), y(b) {}
    void setX(int a) {
        x = a;
    }
    void setY(int b) {
        y = b;
    }
    int getX() const {
        return x;
    }
    int getY() const {
        return y;
    }
    Vector operator + (const Vector& obj) const {
        return Vector(x + obj.x, y + obj.y);
    }
    Vector operator - (const Vector& obj) const {
        return Vector(x - obj.x, y - obj.y);
    }
    Vector operator * (const Vector& obj) const {
        return Vector(x * obj.x, y * obj.y);
    }
    Vector operator / (const Vector& obj) const {
        return Vector(x / obj.x, y / obj.y);
    }
    double magnitude() const {
        return sqrt(x * x + y * y);
    }
};

int main() {
    Vector v1(2, 3);
    Vector v2(3, 2);

    Vector res = v1 + v2;

    cout << res.getX() << " , " << res.getY() << endl;

    return 0;
}