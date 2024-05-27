#include <bits/stdc++.h>
using namespace std;
class Student {
    public: 
    int roll;
    int class_name;
    double cgpa;
    Student(int roll,int class_name,double cgpa){
      this->roll = roll;
      this->class_name = class_name;
      this->cgpa = cgpa;
    }
};

Student* func(){
    Student *lata = new Student(10, 7, 3.55);
    return lata;
};


int main()
{
    Student *ans =  func();
     cout 
     << "Class Name: " << (*ans).class_name << endl 
     << "Roll: " << ans->roll << endl 
     << "CGPA: " << ans->cgpa << endl;
     delete ans;
return 0;
}