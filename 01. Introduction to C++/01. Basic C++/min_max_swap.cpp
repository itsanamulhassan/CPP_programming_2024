#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

void func_swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{

    int a, b;
    cin >> a >> b;

    swap(a,b);
    cout << a << " " << b;


    // int a, b,c, d;
    // cin >> a >> b >> c >> d;

    // int single_min = min(a, b);
    // int single_max = max(a, b);

    // cout << "Single Min " << single_min << endl;
    // cout << "Single Max " << single_max << endl;

    // // MULTIPLE MIN AND MAX
    // int multiple_min = min({a,b,c,d});
    // int multiple_max = max({a,b,c,d});

    // cout << "Multiple Min " << multiple_min << endl;
    // cout << "Multiple Max " << multiple_max << endl;





return 0;
}