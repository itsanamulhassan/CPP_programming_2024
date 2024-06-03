#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin>> test_case;
    for(int i = 0; i < test_case; i++){
        int num; 
         char c;
        cin >> num >> c;
        for(int j = 0; j < num; j++){
            cout << c << " ";
        }
        cout << endl;
    }

return 0;
}