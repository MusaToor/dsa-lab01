#include <iostream> 
using namespace std; 
int main() { 
    int n; 
    cout << "Enter number of students: "; 
    cin >> n; 
    // Validating before allocation
    while (n < 1) { 
        cout << "Error: number of students must be atleast 1. Enter again: "; 
        cin >> n; 
    } 
    int *marks = new int[n]; //dynamic allocation
    for (int x = 0; x < n; x++) {     // Reading values using pointer notation
        cout << "Enter mark of student " << x + 1 << ": "; 
        cin >> *(marks + x); 
    } 
    //displaying marks, total, average, >50 count using pointer notation
    int total = 0;
    int fiftyCount = 0;
    cout << "Marks: ";
    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";
        total += *(marks + i);
        if (*(marks + i) >= 50) {
            fiftyCount++;
        }
    }
    double average = static_cast<double>(total) / n;
    cout << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "count >= 50: " << fiftyCount << endl;
    delete[] marks; //releasing dynamically allocated memory
    marks = nullptr; //setting marks to null
    return 0; 
}



