#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        string n;
        cin >> n;
        long long int 
        last_sum = 0,
        first_sum = 0;
        for(int i = 0; i< 3; i++){
            first_sum += n[i] - '0';
        }
        for(int i = 3; i< 6; i++){
            last_sum += n[i] - '0';
        }

       if(first_sum == last_sum){
        cout << "YES" << endl;
       }else {
         cout << "NO" << endl;
       }

    }

return 0;
}