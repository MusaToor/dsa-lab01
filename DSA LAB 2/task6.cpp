#include <iostream>
using namespace std;

int main() {

    int n = 3;
    int* values = new int[n];

    // Read three integers:
    for (int i = 0; i < n; i++) {
        cin >> *(values + i);
    }

    // Display three integers
    for (int i = 0; i < n; i++) {
        cout << *(values + i) << " ";
    }
    cout << endl;

    // Releasing the array:
    delete[] values;

    // Reset pointer
    values = nullptr;
    return 0;
}




