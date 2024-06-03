#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    for(int t = 0; t < test_cases; t++){
        string s, x;
    cin >> s >> x;
    for(int i = 0; i < s.size(); i++){
         string r = s.substr(i, x.size());
        if(r == x){
            s[i] ='#';
            s.erase(i+1, x.size()-1);
        }
    }
    cout << s << endl;
    }
   

return 0;
}