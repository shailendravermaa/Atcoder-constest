#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>> n;
    vector<string>s;
    int max_length = 2;
    for(int i = 0; i < n; i++) {
        string str;
        cin>>str;
        int str_size = str.size();
        max_length = max(max_length, str_size);
        s.push_back(str);
    }
    vector<string> ans;
    for(int i = 0; i < n; i++) {
        int dot = (max_length - s[i].size()) / 2;
        string str = "";
        for(int j = 0; j < dot; j++) {
            str += '.';
        }
        str += s[i];
        for(int j = 0; j < dot; j++) {
            str += '.';
        }
        ans.push_back(str);

    }

    for(int i = 0; i < n; i++) {
        cout<<ans[i]<<endl;
    }

    return 0;
}