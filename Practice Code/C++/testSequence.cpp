#include <iostream>
#include <vector>
using namespace std;

// Sequence 1: 198, 194, 185, 169, ...
void sequencePrimesSquared() {
    int start = 198;
    for (int i = 2; i <= 6; ++i) {
        cout << start << " ";
        start -= (i * i);
    }
    cout << endl;
}

// Sequence 2: 2, 2, 5, 13, 28, ...
void sequenceSquareMinusOne() {
    vector<int> seq = {2};
    int add = 2;
    for (int i = 1; i < 6; ++i) {
        seq.push_back(seq.back() + (add * add - 1));
        ++add;
    }
    for (int num : seq) cout << num << " ";
    cout << endl;
}

// Sequence 3: 3, 9, 15, ...
void sequenceArithmetic() {
    int a = 3, d = 6;
    for (int i = 0; i < 6; ++i) {
        cout << a + i * d << " ";
    }
    cout << endl;
}

// Sequence 4: 7, 26, 63, 124, ...
void sequenceSecondDiff() {
    vector<int> seq = {7, 26, 63, 124};
    vector<int> diffs = {19, 37, 61}; // First-level differences
    int next_diff = 91; // Based on previous growth
    seq.push_back(seq.back() + next_diff);
    for (int i = 0; i < 5; ++i) cout << seq[i] << " ";
    cout << endl;
}

// Sequence 5: 1, 5, 14, 30, ...
void sequenceSumOfSquares() {
    int current = 1, add = 4;
    for (int i = 0; i < 6; ++i) {
        cout << current << " ";
        current += add;
        add += 2; // Next square
    }
    cout << current << endl; // Add next term with 7²
}

// Sequence 6: B, C, E, G, K, ...
void sequenceAlphabetPrimes() {
    vector<int> primes = {2, 3, 5, 7, 11, 13};
    for (int val : primes) {
        cout << static_cast<char>('A' + val - 1) << " ";
    }
    cout << endl;
}

// Sequence 7: Identify incorrect term in 5, 21, 61, 122, 213, 340, 509
void findWrongInFirstSequence() {
    vector<int> seq = {5, 21, 61, 122, 213, 340, 509};
    cout << "Most likely incorrect term: " << seq[4] << " (should be around 211)" << endl;
}

// Sequence 8: Identify incorrect term in 3, 2, 8, 9, ...
void findWrongInSecondSequence() {
    vector<int> seq = {3, 2, 8, 9, 13, 22, 18, 32, 23, 42};
    cout << "Most likely incorrect term: " << seq[6] << " (should be around 27)" << endl;
}

int main() {
    int choice;
    cout << "Choose a sequence to explore:\n";
    cout << "1. Primes Squared Decrease\n";
    cout << "2. Square Minus One Pattern\n";
    cout << "3. Simple Arithmetic\n";
    cout << "4. Second-order Differences\n";
    cout << "5. Sum of Consecutive Squares\n";
    cout << "6. Alphabet Prime Mapping\n";
    cout << "7. Find Wrong Term in First Number Sequence\n";
    cout << "8. Find Wrong Term in Second Number Sequence\n";
    cout << "Enter your choice (1-8): ";
    cin >> choice;

    switch (choice) {
        case 1: sequencePrimesSquared(); break;
        case 2: sequenceSquareMinusOne(); break;
        case 3: sequenceArithmetic(); break;
        case 4: sequenceSecondDiff(); break;
        case 5: sequenceSumOfSquares(); break;
        case 6: sequenceAlphabetPrimes(); break;
        case 7: findWrongInFirstSequence(); break;
        case 8: findWrongInSecondSequence(); break;
        default: cout << "Invalid choice.\n";
    }

    return 0;
}