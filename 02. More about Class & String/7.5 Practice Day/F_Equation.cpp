#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n;
    cin >> x >> n;
    long long int sum = 0;
    for(int i = 1; i <= n; i++){
      if(i % 2 == 0){
       long long int power = 1;
       for(int j = 0; j < i; j++){
        power = power * x;
       }
       sum += power;
      }
    }
    cout << sum << endl;


return 0;
}