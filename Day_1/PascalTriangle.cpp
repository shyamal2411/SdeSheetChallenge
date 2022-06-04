#include <bits/stdc++.h> 
using namespace std;

// https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_1089580?topList=striver-sde-sheet-problems&leftPanelTab=1
vector<vector<long long int>> printPascal(int n) 
{
        vector<vector<long long int>> ans(n);
//         ans.push_back(1);
    
        for(int i = 0; i < n; i++){
            ans[i] = resize(i+1);
            ans[i][0] = ans[i][i] = 1;
            
            for(int j = 0; j < i; j++){
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
    return ans;
}


int main(){
    int n;
    cin >> n;
    vector<vector<long long int>> ans = printPascal(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}