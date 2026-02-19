#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long n;
        cin >> n;

        if(n < 4 || n % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        long long minimum = (n + 5) / 6;  // ceil(n/6)
        long long maximum = n / 4;

        cout << minimum << " " << maximum << endl;
    }
}
