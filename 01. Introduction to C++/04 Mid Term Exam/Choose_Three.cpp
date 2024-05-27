#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, sum;
        long long int index_sum = 0;
        cin >> n >> sum;
        int a[n];

        for(int j = 0; j < n; j++){
            cin >> a[j];
        }
        int flag = 0;
        for(int k = 0; k < n; k++){
            for(int l = k+1; l < n; l++){
                for(int m = l+1; m < n; m++){
                    if(k != l && l != m && k != m){
                      if(a[k] + a[l] + a[m] == sum){
                        flag = 1;
                        break;
                      }
                    }
                   
            }
        }
    }

    if(flag == 1){
            cout << "YES" <<endl;
        }else if(flag == 0 ){
             cout << "NO" <<endl;
        }
    }
    

return 0;
}