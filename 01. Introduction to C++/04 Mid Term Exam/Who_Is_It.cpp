#include <bits/stdc++.h>
using namespace std;
class Student {
public:
    int ID;
    char name[101];
    char section;
    int total_marks;
    Student(){};
    Student(int ID, char name[101], char section, int total_marks) {
        this->ID = ID;
        strcpy(this->name, name);
        this->section = section;
        this->total_marks = total_marks;
    }
};

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        Student target_student;
        int max_total_marks = INT_MIN;

        for (int i = 0; i < 3; ++i) {
            int ID, total_marks;
            char name[101];
            char section;

            cin >> ID >> name >> section >> total_marks;

            if (total_marks > max_total_marks || (total_marks == max_total_marks && ID < target_student.ID)) {
                target_student = Student(ID, name, section, total_marks);
                max_total_marks = total_marks;
            }
        }

        
        cout << target_student.ID << " " << target_student.name << " " << target_student.section << " " << target_student.total_marks << endl;
    }

    return 0;
}