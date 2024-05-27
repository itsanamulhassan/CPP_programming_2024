#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "hello world";
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;

    // string a;
    // a = "__glibcxx_long_double_has_denorm_loss";
    // cout << a.capacity() << endl;
    // a = "__glibcxx_long_double_has_denorm_loss__glibcxx_long_double_has_denorm_loss__glibcxx_long_double_has_denorm_loss__glibcxx_long_double_has_denorm_loss__glibcxx_long_double_has_denorm_loss__glibcxx_long_double_has_denorm_loss__glibcxx_long_double_has_denorm_loss__glibcxx_long_double_has_denorm_loss";
    // cout << a.capacity() << endl;
    // cout << a.size() << endl;
    // a.clear();
    //  cout << a << endl;


    // string a = "Hello";
    // if(a.empty()) cout << "Empty" << endl;
    // else cout <<  "Not Empty" << endl;


    string s = "hello world";
    s.resize(20, '-');
    cout << s.size() << endl;
    cout << s << endl;

return 0;
}