#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str, custom_str;
    getline(cin , str);
    int  word_count = 0;

    for(int i = 0; i < str.size(); i++){
        if(str[i] != 32 && str[i] != '!' && str[i] != '?' && str[i] != '.' && str[i] != ','){
       custom_str+=str[i];
        }

         if((str[i] == 32 || str[i] == '!' || str[i] == '?' || str[i] == '.' || str[i] == ',' || i == str.size() -1) && custom_str.size() != 0 ){
       word_count++;
       custom_str = "";
        }
    }

    cout << word_count;

return 0;
}