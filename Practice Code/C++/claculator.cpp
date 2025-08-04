#include <iostream>
#include <cmath>
using namespace std; 

class SimCal {
public: 
double sum(double a, double b);
double diff(double a, double b);
double prod(double a, double b);
double quot(double a, double b);
double percent(double a, double b);
double sq(double a);
double sqrt(double a);
double cube(double a);
};

class SciCal : public SimCal {
public: 
double power(double a, double b)
double sine(double a);
double cosine(double a);
double tangent(double a);
double asine(double a);
double acosine(double a);
double atangent(double a);
double comlog(double a);
double natlog(double a);
double expo(double a);
double sineh(double a);
double cosineh(double a);
double tangenth(double a);
double asineh(double a);
double acosineh(double a);
double atangenth(double a);
};

double SimCal :: sum(double a, double b);
double SimCal :: diff(double a, double b);
double SimCal :: prod(double a, double b);
double SimCal :: quot(double a, double b);
double SimCal :: percent(double a, double b);
double SimCal :: sq(double a);
double SimCal :: sqrt(double a);
double SimCal :: cube(double a);

double power(double a, double b)
double sine(double a);
double cosine(double a);
double tangent(double a);
double asine(double a);
double acosine(double a);
double atangent(double a);
double comlog(double a);
double natlog(double a);
double expo(double a);
double sineh(double a);
double cosineh(double a);
double tangenth(double a);
double asineh(double a);
double acosineh(double a);
double atangenth(double a);

int main() {
SciCal cal;

return 0;
}