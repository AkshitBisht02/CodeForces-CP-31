#include <bits/stdc++.h>
using namespace std;

int check(string s, string t) {
    int i = s.size() - 1;
    int j = 1;
    int del = 0;

    while (i >= 0) {
        if (s[i] == t[j]) {
            j--;
            if (j < 0) return del;
        } else {
            del++;
        }
        i--;
    }

    return 1e9;
}

int main() {
    int T;
    cin >>T;

    while (T--) {
        string s;
        cin >> s;

        cout << min({
            check(s, "00"),
            check(s, "25"),
            check(s, "50"),
            check(s, "75")
        }) << '\n';
    }
}