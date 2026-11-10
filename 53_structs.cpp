#include <iostream>

using namespace std;

struct student
{
    string name;
    int studentId;
    double gpa;
    bool enrolled = true;
};

int main() {

    student student1;
    student1.name = "Mosbee";
    student1.studentId = 2025330139;
    student1.gpa = 3.5;

    student student2;
    student2.name = "Nerd";
    student2.studentId = 2025330149;
    student2.gpa = 3.9;

    student student3;
    student3.name = "Michael";
    student3.studentId = 2025330143;
    student3.gpa = 3.2;


    cout << student1.name << ' ' << student1.studentId << ' ' << student1.gpa << ' ' << student1.enrolled << endl;
    cout << student2.name << ' ' << student2.studentId << ' ' << student2.gpa << ' ' << student2.enrolled << endl;
    cout << student3.name << ' ' << student3.studentId << ' ' << student3.gpa << ' ' << student3.enrolled <<endl;
    
    return 0;
}