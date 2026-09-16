#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Enter number of students (1-10): ";
        cin >> n;
    } while (n < 1 || n > 10);

    // Allocate original array
    int* marks = new int[n];
    cout << "Enter " << n << " marks: ";
    for (int i = 0; i < n; i++) {
        cin >> *(marks + i);
    }

    // Allocate bigger array
    int* newMarks = new int[n + 1];
    //Copy old values
    for (int i = 0; i < n; i++) {
        *(newMarks + i) = *(marks + i);
    }
    // Read new student's mark:
    cout << "Enter new mark: ";
    cin >> *(newMarks + n);

    // Delete old array:
    delete[] marks;
    // Make marks point to new array:
    marks = newMarks;
    // Update size:
    n++;

    // Display all values
    cout << "Updated marks: ";
    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";
    }
    cout << endl;

    // Releasing final block exactly once
    delete[] marks;
    marks = nullptr;
    return 0;
}


