#include <bits/stdc++.h>
using namespace std;

class Student {
    public: 
    char name[100];
    int roll;
    double cgpa;
};


int main()
{
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.cgpa;
    getchar();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;

    cout << "Name: " << a.name << endl << "Roll: " << a.roll << endl << "CGPA: " << a.cgpa << endl;
    cout << "Name: " << b.name << endl << "Roll: " << b.roll << endl << "CGPA: " << b.cgpa << endl;



return 0;
}