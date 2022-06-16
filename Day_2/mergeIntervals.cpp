#include<bits/stdc++.h> 
using namespace std;

#define vi vector<vector<int>>
class Solution {
public:
  vi merge(vi &intervals){
      sort(intervals.begin(), intervals.end());
      vi merged;

      for(auto it: intervals){
          if(merged.empty() || merged.back()[1] < it[0]){
            merged.push_back(it);
          }
          else{
                merged.back()[1] = max(merged.back()[1], it[1]);
          }
        }
    return merged;
  }
};

int main(){
Solution ss;
vi vec = {{1,3}, {2,6},{8,10},{15,18}};
    vector<vector<int>> merging = ss.merge(vec);
for (int i = 0; i < merging.size(); i++) {
    for (int j = 0; j < merging[0].size(); j++) {
      cout << merging[i][j] << " ";
    }
    cout << "\n";
  }
return 0;
}