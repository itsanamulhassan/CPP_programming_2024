#include <bits/stdc++.h>
using namespace std;
int* func(){
    int *a = new int;
    *a = 1000000;
    cout << &a << endl;
    return a;
}


int main()
{

    int *value = func();

    cout << &value << endl;
    // int *p = new int;
    // *p =  100;
    // cout << *p << endl;
    // cout << p << endl;


return 0;
}