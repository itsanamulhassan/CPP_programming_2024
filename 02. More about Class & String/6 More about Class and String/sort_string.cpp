#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin ,s);
    // sort(s.begin(), s.end()); // ascending
    sort(s.begin(), s.end(), greater<char>()); // descending

    cout << s << endl;

return 0;
}