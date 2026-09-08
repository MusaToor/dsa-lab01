
#include <iostream>
using namespace std;

int main() {
	int arr[8];   //declaring array of 8 integers
	cout << "Enter 8 numbers separated by spaces: " << endl;   
	// loop to read integers into the array
	for (int x = 0; x < 8; x++) {
		cin >> arr[x];
	}
	//initializizng largest and smallest with the first element of the array
	int largest = arr[0];
	int smallest = arr[0];
	int largestIndex = 0;
	int smallestIndex = 0;
	// looping through the array from 2nd element and onward
	for (int x = 1; x < 8; x++) {
		if (arr[x] > largest) {  //condition to update 'largest' variable
			largest = arr[x];
			largestIndex = x;
		}
		if (arr[x] < smallest) {  //condition to update 'smallest' variable
			smallest = arr[x];
			smallestIndex = x;
		}
	}
	cout << "Largest number is " << largest << " at index " << largestIndex << endl;
	cout << "Smallest number is " << smallest << " at index " << smallestIndex << endl;
}

