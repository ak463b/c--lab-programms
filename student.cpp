#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks;
    int dob;
    char branch;
};

int main() 
{
    student s;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter marks: ";
    cin >> s.marks;
    cout<<" Enter dob: ";
    cin>> s.dob;
    cout<< "Enter branch: ";
    cin>> s.branch;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;
    cout << "dob:" <<s.dob <<endl;
    cout << "branch:" <<s.branch <<endl;
    return 0;
}