
#include <iostream>
using namespace std;

int main() {
	// declaring the array and the total variable
	int numbers[5];
	int total = 0;
	for (int x = 0; x < 5; x++) {  //loop to populate the array
		cout << "Please enter number " << x+1 << ": ";
		cin >> numbers[x];   //reading numbers into the array
	}
	for (int x = 0; x < 5; x++) {    //loop to calculate total and display total of each stage
		total += numbers[x];    
		cout << "i=" << x << ", numbers[i]=" << numbers[x] << ", the total of addition " << x + 1 << " is: " << total << endl;
	}
	cout << endl;
	cout << "The total of the 5 entered integers is: " << total << endl;  
}


