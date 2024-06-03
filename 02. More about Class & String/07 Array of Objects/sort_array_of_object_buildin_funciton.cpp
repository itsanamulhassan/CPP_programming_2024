#include <bits/stdc++.h>
using namespace std;
class Student {
    public: 
    string name;
    int roll;
    int marks; 
};

bool cmp(Student a, Student b){
    return a.marks < b.marks;
}

int main()
{
    int n;
    cin >> n;
    Student students_info[n];

    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, students_info[i].name);
        cin >> students_info[i].roll >> students_info[i].marks;
    }

sort(students_info, students_info+n, cmp);
   

    for(int i = 0; i < n; i++){
        cout << students_info[i].name << " " << students_info[i].roll << " " << students_info[i].marks << endl;
    }

return 0;
}

