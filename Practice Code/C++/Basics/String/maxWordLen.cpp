#include <iostream>
using namespace std;

int maxWordLen(char* str, int size) {
    int currentLen = 0;
    int maxLen = 0;
    int i = 0;
    while(i <= size) {
        if(str[i] == ' ' || str[i] == '\0') {
            if(currentLen > maxLen) maxLen = currentLen;
            currentLen = 0;           
        }
        else currentLen++;
        
        if(str[i] == '\0') break;
        i++;
    }

    return maxLen;
}

int main() {
    int size;
    cout << "Enter the size of the String: ";
    cin >> size;
    cin.ignore();

    char* str = new char[size + 1];
    cout << "Enter the String: ";
    cin.getline(str, size+1);
    cin.ignore();

    cout << maxWordLen(str, size+1);

    return 0;
}