

#include <iostream>
using namespace std;		//using standard namespace

int main() {
	int arr[] = { 2, 4, 6, 8, 10 };			//declaring the array of 5 integers
	arr[2] = 7;			//changing the 3rd element of the array
	for (int x = 0; x < 5; x++) {		//looping through the array
		cout << arr[x] << " ";	     //displaying the array elements inside loop
	}
	cout << endl;
	return 0;
}



