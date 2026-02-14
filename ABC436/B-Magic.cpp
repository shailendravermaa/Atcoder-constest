#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>>mat(n, vector<int>(n, 0)); // initiallization is the must 
    int last_row = 0;
    int last_col = (n - 1) / 2;
    mat[last_row][last_col] = 1;
    int k = 1;
    for(int i = 0; i < (n*n) - 1; i++) {
        int option1_row = (last_row - 1) % n < 0 ? ((last_row - 1) % n + n) :  (last_row - 1) % n ;
        int option1_col = (last_col + 1) % n;
        int option2_row = (last_row + 1) % n;
        int option2_col = last_col;
        if(mat[option1_row][option1_col] == 0) {
            mat[option1_row][option1_col] = k + 1;
            last_row = option1_row;
            last_col = option1_col;
            k++;
        }else{
            mat[option2_row][option2_col] = k + 1;
            last_row = option2_row;
            last_col = option2_col;
            k++;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}