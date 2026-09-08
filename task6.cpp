
#include <iostream>
using namespace std;

int main() {
	int arr[6];
	cout << "Enter 6 numbers separated by spaces: " << endl;
	// loop to read integers into the array
	for (int x = 0; x < 6; x++) {
		cin >> arr[x];
	}
	cout << endl;
	//loop to display unreversed original array
	cout << "unreversed array: " << endl;
	for (int x = 0; x < 6; x++) {
		cout << arr[x] << " ";
	}
	//reversing the array:
	for (int i = 0; i < 3; i++) {  //looping through fitst half of the elements
		int temp = arr[i];  // teporary variable for the swapping logic
		//swapping elements e.g. first and last element:
		arr[i] = arr[5 - i];
		arr[5 - i] = temp;
	}
	cout << endl;
	//loop to display reversed array
	cout << "reversed array: " << endl;
	for (int x = 0; x < 6; x++) {
		cout << arr[x] << " ";
	}
}


