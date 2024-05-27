#include <bits/stdc++.h>
using namespace std;
int main()
{
   
    int a[3];
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i < 3; i++){
        cin >> a[i];
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }
    cout << min << " " << max;
   

return 0;
}