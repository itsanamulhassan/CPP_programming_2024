#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >>test_case;
    for(int t = 0; t < test_case ; t++){
        int n;
    cin >> n;
    int a[n];
    int odd_count = 0, even_count = 0;
    for(int i = 0; i <n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0 && a[i] != 0){
            even_count++;
        }else if(a[i] % 2 != 0 && a[i] != 0) {
        odd_count++;
        }
    }

 if(even_count == odd_count){
    cout << "0" <<endl;
} else if(n % 2 != 0){
   cout << "-1" <<endl;
} else{
     cout << abs(even_count -odd_count)/ 2<<endl;
} 
}

return 0;
}