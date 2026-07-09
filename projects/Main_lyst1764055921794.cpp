// Student Report Management System
// Language: C++ (uses STL and file handling)
// Project-1 Solution

#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;

struct Student {
    string name;
    int rollNo;
    map<string, int> marks; // subject -> marks
    float percentage;
    char grade;
    /*
     // Comparison operator for lower_bound | Binary Search
    bool operator<(const Student& other) const {
        return rollNo < other.rollNo;
    }
    */
};

vector<Student> students;
/*
marks={"maths":95, "Physics":77}

*/
void calculateGrade(Student &s) {
    int total = 0;
    for (auto m : s.marks) 
        total += m.second;
    s.percentage = total / (float)s.marks.size();

    if (s.percentage >= 90) s.grade = 'A';
    else if (s.percentage >= 80) s.grade = 'B';
    else if (s.percentage >= 70) s.grade = 'C';
    else if (s.percentage >= 60) s.grade = 'D';
    else s.grade = 'F';
}

void addStudent() {
    Student s;
    cout << "Enter name: "; cin.ignore(); getline(cin, s.name);
    cout << "Enter roll number: "; cin >> s.rollNo;
    int subjects;
    cout << "Enter number of subjects: "; cin >> subjects;
    for (int i = 0; i < subjects; i++) {
        string sub; int mark;
        cout << "Enter subject name: "; cin >> sub;
        cout << "Enter marks: "; cin >> mark;
        s.marks[sub] = mark;
    }
    calculateGrade(s);
    students.push_back(s);
    cout << "Student added successfully!\n";
}

void displayStudents() {
    cout << left << setw(10) << "RollNo" << setw(20) << "Name" << setw(15) << "%" << setw(10) << "Grade" << "Subjects\n";
    for (auto s : students) {
        cout << left << setw(10) << s.rollNo << setw(20) << s.name << setw(15) << s.percentage << setw(10) << s.grade;
        for (auto m : s.marks) {
            cout << m.first << ":" << m.second << " ";
        }
        cout << "\n";
    }
}

void searchStudent() {
    int roll;
    cout << "Enter roll number to search: "; cin >> roll;
    for (auto s : students) {
        if (s.rollNo == roll) {
            cout << "Found: " << s.name << " with grade: " << s.grade << " and %: " << s.percentage << endl;
            return;
        }
    }
    cout << "Student not found!\n";
}
/*
//Binary Search Version
//lower_bound() ek binary search algorithm hai jo sorted vector mein minimum index return karta hai jahan pe element insert ho sakta hai.

void searchStudent() {
    int roll;
    cout << "Enter roll number to search: ";
    cin >> roll;

    // Ensure the students are sorted by roll number
    sort(students.begin(), students.end());

    // Create a dummy Student object for search
    Student key;
    key.rollNo = roll;

    auto it = lower_bound(students.begin(), students.end(), key);

    if (it != students.end() && it->rollNo == roll) {
        cout << "Found: " << it->name << " with grade: " << it->grade
             << " and %: " << it->percentage << endl;
    } else {
        cout << "Student not found!\n";
    }
}
*/
void saveToFile() {
    ofstream fout("students.txt");
    for (auto s : students) {
        fout << s.name << "," << s.rollNo << "," << s.percentage << "," << s.grade;
        for (auto m : s.marks) {
            fout << "," << m.first << ":" << m.second;
        }
        fout << endl;
    }
    fout.close();
    cout << "Data saved to file.\n";
}

void loadFromFile() {
    ifstream fin("students.txt");
    students.clear();
    string line;
    while (getline(fin, line)) {
        Student s;
        s.marks.clear();
        stringstream ss(line);
        string part;
        getline(ss, s.name, ',');
        getline(ss, part, ','); s.rollNo = stoi(part);
        getline(ss, part, ','); s.percentage = stof(part);
        getline(ss, part, ','); s.grade = part[0];
        while (getline(ss, part, ',')) { //part="maths:95"
            size_t sep = part.find(":");
            if (sep != string::npos) {
                string sub = part.substr(0, sep);
                int mark = stoi(part.substr(sep + 1));
                s.marks[sub] = mark;
            }
        }
        students.push_back(s);
    }
    fin.close();
    cout << "Data loaded from file.\n";
}

int main() {
    loadFromFile();
    int choice;
    do {
        cout << "\n1. Add Student\n2. Display All\n3. Search\n4. Save to File\n5. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: saveToFile(); break;
            case 5: cout << "Exiting..."; break;
            default: cout << "Invalid choice!";
        }
    } while (choice != 5);
    return 0;
}
