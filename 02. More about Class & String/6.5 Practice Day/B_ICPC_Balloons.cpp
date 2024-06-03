#include <bits/stdc++.h>
using namespace std;

class Frequency {
    public:
    int count;
    char value;
};
int main()
{
   int test_case;
   cin >> test_case;
   for(int t = 0; t < test_case; t++){
    int n;
    cin>> n;
    string s;
    cin >> s;
    Frequency f[26];
    for(int i = 0; i < 26; i++){
        f[i].value = char(i + 'A');
        f[i].count= 0;
    }
    for(char c: s){
        f[int(c - 'A')].count++;
    }

    long long int balloon = 0;
    for (int i = 0; i < 26; i++) {
        if (f[i].count > 0) {
                balloon += 1 + f[i].count;
        }
    }

    cout << balloon << endl;
   }


   

return 0;
}