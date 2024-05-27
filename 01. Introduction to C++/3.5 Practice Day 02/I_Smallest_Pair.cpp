#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        int a[N];
        for (int i = 0; i < N; ++i) {
            cin >> a[i];
        }
        
        int min_sum = INT_MAX;
        for (int j = 1; j < N; ++j) {
            int min_left = INT_MAX;
            for (int i = 0; i < j; ++i) {
                int left = a[i] - (i + 1);
                min_left = min(min_left, left);
            }
            int right = a[j] + (j + 1);
            int current_sum = min_left + right;
            min_sum = min(min_sum, current_sum);
        }
        
        cout << min_sum << endl;
    }

    return 0;
}
