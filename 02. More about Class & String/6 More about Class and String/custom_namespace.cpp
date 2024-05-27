#include <bits/stdc++.h>
using namespace std;

namespace Rakib {
    int age = 20;
    void hello(){
        cout << "Hello Rakib"<<endl;
    }

};
namespace Sakib {
    int age2 = 40;
    void hello2(){
        cout << "Hello Sakib"<<endl;
    }

};
using namespace Rakib;
using namespace Sakib;
int main()
{
    cout << age<< endl;
    cout << age2 << endl;

return 0;
}