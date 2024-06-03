#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,r;
    cin >> s;

    for(int i = 0;i < s.size(); i++){
        if(s[i] == 'E' &&  s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T'){
            s[i] = 32;
            s.erase(i+1, 4);

        }
    }

    cout << s;

   

return 0;
}