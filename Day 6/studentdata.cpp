// Write a student class and use it in your program. Store the data of 10 students and display
//  the sorted data according to their roll numbers, dates of birth, and total marks.

#include <iostream>
#include <algorithm>
using namespace std;

class Student {
public:
    int rollNo;
    string dob;        
    int totalMarks;

    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Date of Birth (YYYY-MM-DD): ";
        cin >> dob;
        cout << "Enter Total Marks: ";
        cin >> totalMarks;
    }

    void display() const {
        cout << rollNo << "\t" << dob << "\t" << totalMarks << endl;
    }
};

int compareByRollNo(const Student &a, const Student &b) {
    return a.rollNo < b.rollNo;
}

int main() {
    const int SIZE = 3;
    Student iArray[SIZE];
    Student oArray[SIZE];

   
cout << "Enter details for 10 students:\n";
for (int i = 0; i < SIZE; i++) {
    cout << "\nStudent " << i + 1 << ":\n";
    iArray[i].input();
}


for (int i = 0; i < SIZE; i++) {
    oArray[i] = iArray[i];
}
sort(oArray, oArray + SIZE, compareByRollNo);

cout << "\nStudents sorted by Roll Number:\n";
cout << "RollNo\tDOB\t\tMarks\n";
for (int i = 0; i < SIZE; i++)
    oArray[i].display();

return 0;

}
