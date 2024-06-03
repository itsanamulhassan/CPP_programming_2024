#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    stringstream ss(str);
    
    string word;
     bool first_word = true;


    while(ss>>word) {
       reverse(word.begin(), word.end());
         if (!first_word) {
            cout << " "; 
        }
        first_word = false;
       cout << word;
       }


return 0;
}