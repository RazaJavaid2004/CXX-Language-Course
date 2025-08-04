#include <iostream>
using namespace std; 

class shop {
int itemId[10];
float itemPrice[10];
int counter;
public: 
void initCounter() {counter = 0;}
void setPrice();
void displayPrice();
};

void shop :: setPrice() {
cout << "Enter the id of Item No: " << counter+1 << endl;
cin >> itemId[counter];
cout << "Enter the price of Item No: " << counter+1 << endl;
cin >> itemPrice[counter];
counter++;
}

void shop :: displayPrice() {
for(int i = 0; i < counter; i++) {
cout << "Item Id: " << itemId[i] << " Item Price: " << itemPrice[i] << endl;
}
}

int main() {
shop dukaan;
dukaan.initCounter();
for(int i = 0; i < 10; i++) dukaan.setPrice();
dukaan.displayPrice();
return 0;
}