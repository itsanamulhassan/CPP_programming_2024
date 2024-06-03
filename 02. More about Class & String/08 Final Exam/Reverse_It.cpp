#include <bits/stdc++.h>
using namespace std;
class Student {
    public: 
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int N;
    cin >> N;
    Student students[N];

    for(int i = 0; i < N; i++){
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id;
    }

    for(int i = 0; i < N; i++){
      for(int j = i + 1; j < N; j++){
        char temp = students[i].s;
        students[i].s = students[j].s;
        students[j].s = temp;
      }
    }

    for(int i = 0; i < N; i++){
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << endl;
    }

return 0;
}