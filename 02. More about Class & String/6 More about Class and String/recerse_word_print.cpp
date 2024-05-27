#include <bits/stdc++.h>
using namespace std;
void print_word(stringstream & ss){
    string word;
    if(ss >> word){
        print_word(ss);
        cout << word << endl;
    }

}
int main()
{
    string s = "The quick brown fox jumps over the lazy dog";
    stringstream ss(s);
    print_word(ss);
    // string word;
    // while(ss >> word){
    //     cout << word << endl;
    // }

return 0;
}