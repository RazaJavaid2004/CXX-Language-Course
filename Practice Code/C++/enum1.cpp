#include <iostream>
using namespace std; 

typedef enum {
Monday,
Tuesday,
Wednesday,
Thursday,
Friday,
Saturday,
Sunday
} Day;

int main() {
Day weekdays = Tuesday;
cout << weekdays << endl;
return 0;
}