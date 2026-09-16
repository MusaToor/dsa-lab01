#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    //reading and validate rows and columns
    do {
        cout << "Enter number of students: ";
        cin >> rows;
        if (rows <= 0) {
            cout << "Number of students must be greater than 0. Enter again: \n";
        }
    } while (rows <= 0);
    do {
        cout << "Enter number of subjects: ";
        cin >> cols;

        if (cols <= 0) {
            cout << "Number of subjects must be greater than 0. enter again:\n";
        }
    } while (cols <= 0);
    // Allocating array of row pointers:
    int** marks = new int*[rows];
    // Allocate each row
    for (int r = 0; r < rows; r++) {
        marks[r] = new int[cols];
    }

    // Inputting marks
    cout << "Enter marks (0 to 100): \n";
    for (int r = 0; r < rows; r++) {
        cout << "Student " << r + 1 << ": ";
        for (int c = 0; c < cols; c++) {
            cin >> *(*(marks + r) + c);
        }
    }

    //displaying matrix
    cout << "Marks Matrix:\n";
    for (int r = 0; r < rows; r++) {
        cout << "Student " << r + 1 << ": ";
        for (int c = 0; c < cols; c++) {
            cout << *(*(marks + r) + c) << "\t";
        }
        cout << endl;
    }


    //Finding student with highest total:

    // Calculating first student's total
    int bestTotal = 0;
    for (int c = 0; c < cols; c++) {
        bestTotal += *(*(marks + 0) + c); //used row 0
    }
    int bestStudent = 1;
    cout << "Student 1 total = " << bestTotal << endl;

    // Compare remaining students
    for (int r = 1; r < rows; r++) {
        int total = 0;
        for (int c = 0; c < cols; c++) {
            total += *(*(marks + r) + c);
        }
        // Displaying every student's total
        cout << "Student " << r + 1 << " total = " << total << endl;

        // Find highest total
        if (total > bestTotal) {
            bestTotal = total;
            bestStudent = r + 1;
        }
    }

    cout << "\nStudent with highest total: Student "
         << bestStudent << endl;

    cout << "Highest total: " << bestTotal << endl;

    // Deleting all rows
    for (int r = 0; r < rows; r++) {
        delete[] marks[r];
    }

    // Deleting the row-pointer array
    delete[] marks;

    // Set pointer to nullptr
    marks = nullptr;

    return 0;
}