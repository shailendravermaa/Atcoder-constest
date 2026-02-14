#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin>>n>>s;
    while(s.size() < n) {
        s = 'o' + s;
    }

    cout<<s;
    return 0;
}