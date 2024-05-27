#include <bits/stdc++.h>
using namespace std;
int main()
{

    string a = "Hello";
    string b = "World";
    // a = a+b;
    // a+=b;
    // a.append(b);
    // cout << a << endl;
    // a += 'A'; // work 
    a[5] =  'A'; // not work
    a.push_back('A');
    a.pop_back();
    a.pop_back();
    a.pop_back();
    // a = "Assign";
    a.assign("Assign");
    // cout << a << endl;


    // a.erase(1, 2);
    // a.replace(1, 2, "SS");
    a.insert(1, "Anamul");
    cout << a << endl;


return 0;
}