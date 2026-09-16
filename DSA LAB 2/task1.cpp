#include <iostream>
using namespace std;
int main() {
    int sales[5];
    int* p = sales;
    cout << "Enter 5 non-negative values: " << endl; //data entry using pointer
    for (int x = 0; x < 5; x++) {
        cin >> *(p + x);
    }
    int total = 0;
    cout << "The values are: "; //displaying values and calculating total
    for (int x = 0; x < 5; x++) {
        cout << *(p + x) << " ";
        total += *(p+x);
    }
    cout << endl;
    cout << "The total is: " << total;
    *(p+2) += 2; //adding 2 to the 3rd element using pointer notation
    int total2 = 0;
    cout << endl;
    cout << "After adding 2 to the third element: " << endl;
    cout << "The updated values are: "; //updated total calculation
    for (int x = 0; x < 5; x++) {
        cout << *(p + x) << " ";
        total2 += *(p+x);
    }
    cout << endl;
    cout << "The updated total is: " << total2;
    return 0;
}














