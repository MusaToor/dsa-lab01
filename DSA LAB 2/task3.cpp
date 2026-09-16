#include <iostream>
using namespace std;
int main() {
    int sales[2][3];
    int (*rowPtr)[3] = sales;
    // reading values
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            cout << "Enter sales for Branch " << r + 1
                 << ", Day " << c + 1 << ": ";
            cin >> *(*(rowPtr + r) + c);
        }
    }
    // Displaying table
    cout << "Sales Table:" << endl;
    for (int r = 0; r < 2; r++) {
        cout << "Branch " << r + 1 << ": ";
        for (int c = 0; c < 3; c++) {
            cout << *(*(rowPtr + r) + c) << " ";
        }
        cout << endl;
    }
    // Branch totals
    cout << "Branch Totals:\n";
    for (int r = 0; r < 2; r++) {
        int total = 0;
        for (int c = 0; c < 3; c++) {
            total += *(*(rowPtr + r) + c);
        }
        cout << "Branch " << r + 1 << ": " << total << endl;
    }
    // Day totals
    cout << "Day Totals:\n";
    for (int c = 0; c < 3; c++) {
        int total = 0;
        for (int r = 0; r < 2; r++) {
            total += *(*(rowPtr + r) + c);
        }
        cout << "Day " << c + 1 << ": " << total << endl;
    }
    return 0;
}





