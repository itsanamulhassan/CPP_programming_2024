#include <bits/stdc++.h>
using namespace std;
int main()
{
   
    string str, x = "Jessica";
    getline(cin, str);
    stringstream ss(str);
    string single_word;
    bool has_jessica = false;
    while (ss >> single_word){
       if( x == single_word){
        has_jessica = true;
       }
    }

    if(has_jessica){
        cout << "YES" <<endl;
    }else {
         cout << "NO" <<endl;
    }
    
   

return 0;
}