#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, y;
    cin >> x >> y;
    long long int sum = x + y;
    long long int multiple = x * y;
    long long int subtraction = x - y;

    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << multiple << endl;
    cout << x << " - " << y << " = " << subtraction << endl;

return 0;
}