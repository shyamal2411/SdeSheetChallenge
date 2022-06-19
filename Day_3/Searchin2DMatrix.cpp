#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;
class Solution {
public:
  bool searchMatrix(vector<vi> &mat, int target){
      int low = 0;
      int n = mat.size(), m = mat[0].size();
      int high = n * m - 1;
      if(!mat.size()) return false;
      
      while(low <= high){
        int mid = (low + (high - low) / 2);
        if(mat[mid / m][mid % m] == target){
            return true;
        }
        if(mat[mid/m][mid % m] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
      }
      return false;
  }
};

int main(){
Solution ss;
// vector<int> vec = {};
vector<vector<int>> vec = {{1,2,3}, {4,5,6}, {7,8,9}};
if(ss.searchMatrix(vec, 3))
cout<<"True\n";
else
cout<<"False\n";
// vector<vector<int>> rotated = ss.searchMatrix(vec);
// for (int i = 0; i < rotated.size(); i++) {
//     for (int j = 0; j < rotated[0].size(); j++) {
//       cout << rotated[i][j] << " ";
//     }
//     cout << "\n";
//   }
return 0;
}