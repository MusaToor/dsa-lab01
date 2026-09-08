
#include <iostream>
using namespace std;

int main() {
	int arr[10];
	int count = 1; //first element in right positio as its unique from start
	cout << "Enter 10 numbers separated by spaces: " << endl;
	// loop to read integers into the array
	for (int x = 0; x < 10; x++) {
		cin >> arr[x];
	}
	//main logic:
	for (int x = 1; x < 10; x++) {  //looping through all the elements
		bool unique = true;   //flag for uniqueness check
		for (int i = 0; i < count; i++) {  //looping through the unique sublist
			if (arr[x] == arr[i]) {  //checking if the current element is present in the unique sublist
				unique = false;  // if repeated, flag set to false
			}
		}
		if (unique == true) {  //if flag is ture i.e. element unique, move it to the end of unique sublist
			arr[count] = arr[x];
			count++; //increment unique counter
		}
	}
	cout << endl;
	// displaying the unique part and count
	for (int y = 0; y < count; y++) {
		cout << arr[y] << " ";
	}
	cout << endl;
	cout << "count: " << count << endl;
}


	

