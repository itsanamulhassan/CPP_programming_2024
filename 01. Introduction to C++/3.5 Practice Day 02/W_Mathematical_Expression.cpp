#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if(s == '+'){
        if( a + b == c){
            cout << "Yes" << endl;
        }else {
            long long int sum = a + b;
            cout << sum << endl;
        }

    }else if( s == '-'){
         if( a - b == c){
            cout << "Yes" << endl;
        }else {
            int subtraction = a - b;
            cout << subtraction << endl;
        }

    }else {
        if( a * b == c){
            cout << "Yes" << endl;
        }else {
           long long int multiplication = a * b;
            cout << multiplication << endl;
        }

    }

return 0;
}