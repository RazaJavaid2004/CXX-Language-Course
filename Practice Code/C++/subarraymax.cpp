#include <iostream>
#include <climits>
using namespace std;

int subArrayMax(int* arr, int size) {
    int maxSum = INT_MIN;
    int currentSum;
    for(int start = 0; start < size; start++) {
        currentSum = 0;
        for(int end = start; end < size; end++) {
            currentSum += arr[end];
            maxSum = max(maxSum, currentSum);
        }
    }
    
    return maxSum;
}


int main() {
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    
    cout << "Sum: " << subArrayMax(arr, 7) << endl;

    return 0;
}