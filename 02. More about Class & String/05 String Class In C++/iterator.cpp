#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    // cout << *a.begin() << endl;
    // cout << *(a.end()-1) << endl;

    // string::iterator it;
    // for(it = s.begin(); it < s.end(); it++){
    //     cout << *it << endl;
    // }
    
    // for(string::iterator it = s.begin(); it < s.end(); it++){
    //     cout << *it << endl;
    // }

    for(auto it = s.begin(); it < s.end(); it++){
        cout << *it << endl;
    }

return 0;
}