#include <bits/stdc++.h>

using namespace std;

  bool isValid(string s, int n) {
    return s[0] == s[n - 1];
  }
int main() {
    string s;
    cin>> s;
    int n = s.size();
    if(isValid(s, n)) {
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}