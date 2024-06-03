#include <bits/stdc++.h>
using namespace std;
class Student {
    public: 
    string name;
    int roll;
    int marks; 
};

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

     for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
        if(students_info[i].marks < students_info[j].marks){
        swap(students_info[i], students_info[j]);

    } else if(students_info[i].marks == students_info[j].marks){
        if(students_info[i].roll > students_info[j].roll){
        swap(students_info[i], students_info[j]);
        }
     } 
    }}
    
   

    for(int i = 0; i < n; i++){
        cout << students_info[i].name << " " << students_info[i].roll << " " << students_info[i].marks << endl;
    }

return 0;
}



