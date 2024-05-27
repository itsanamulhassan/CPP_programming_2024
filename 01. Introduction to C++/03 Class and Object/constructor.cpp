#include <bits/stdc++.h>
using namespace std;
class Student {
    public: 
    int roll;
    double cgpa;
    int class_name;
    Student(int roll, double cgpa, int class_name){
        (*this).roll = roll; // dereference
        // this->roll = roll; // short cut
        this->cgpa = cgpa;
        this->class_name = class_name;

    }

};
int main()
{  
    Student santa(29, 3.34,3);

    cout << "Class Name: " << santa.class_name << endl << "Roll: " << santa.roll << endl << "CGPA: " << santa.cgpa << endl;

return 0;
}