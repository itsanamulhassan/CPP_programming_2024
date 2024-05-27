#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
   
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    

     int b[n];
   for(int i = 0; i  < n; i++){
          b[i] = a[n-1-i];
    }
    int flag  =1;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            flag = -1;
            break;
        }
    }

    if(flag == 1){
        cout << "YES" << endl;
    }else if (flag == -1) {
          cout << "NO" << endl;
    }
    

    

return 0;
}