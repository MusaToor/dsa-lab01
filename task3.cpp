
#include <iostream>
using namespace std;

class Student {    //declaring Student class
public:
	//attributes:
	int rollNumber, marks;
	//methods:
	void display() {
		cout << "Roll number: " << rollNumber << endl;
		cout << "Marks: " << marks << endl;
	}
};

int main() {
	Student s1, s2;  //declaring two objects of type Student
	//assigning values to attributes
	s1.rollNumber = 1;
	s1.marks = 80;  //changed to 80 from 75
	s2.rollNumber = 2;
	s2.marks = 90;
	//calling display() on both students
	cout << "Student 1: " << endl;
	s1.display();
	cout << "Student 2: " << endl;
	s2.display();
}




