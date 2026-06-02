#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool flag = true;
        int count = 0;

        for(int i = n - 2; i >= 0; i--) {

            while(arr[i] >= arr[i + 1] && arr[i] > 0) {
                arr[i] /= 2;
                count++;
            }

            if(arr[i] >= arr[i + 1]) {
                flag = false;
                break;
            }
        }

        if(flag) cout << count << endl;
        else cout << -1 << endl;
    }
}