#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
  vector<vector<int>> rotate(vector<vector<int>> &mat){
      int n = mat.size();
    // dry run to understand better if forgot.
      for(int i = 0; i < n; i++){
          for(int j = 0; j < i; j++){
              swap(mat[i][j], mat[j][i]);
          }
      }
      for(int i = 0; i < n; i++)
      reverse(mat[i].begin(), mat[i].end());
  }
};

int main(){
Solution ss;
vector<vector<int>> vec = {{1,2,3}, {4,5,6}, {7,8,9}};
vector<vector<int>> rotated = ss.rotate(vec);
for (int i = 0; i < rotated.size(); i++) {
    for (int j = 0; j < rotated[0].size(); j++) {
      cout << rotated[i][j] << " ";
    }
    cout << "\n";
  }
return 0;
}