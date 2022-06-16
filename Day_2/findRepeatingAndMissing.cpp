#include<bits/stdc++.h> 
using namespace std;

// Tricky approach, can't think of making another array and then check the occurence with 0 and 1
class Solution {
public:
      vector<int> ans;
  vector<int> findRepeating(vector<int> &vec){
    //   unordered_map<int, int> mp;
    //   for(auto i: vec){
    //       mp[i]++;
    //   }
    //   for(auto i: mp){
    //       if(i.first >= 1)
    //       ans.push_back(i.second);
    //   }
      int n = vec.size() + 1;
        vector<int> substitute(n, 0);
        for(int i = 0; i < vec.size(); i++){ substitute[vec[i]]++; }

        for(int i = 1; i <= vec.size(); i++){
            if(substitute[i] == 0 || substitute[i] > 1){ ans.push_back(i); }
        }    
        return ans;
  }
};

int main(){
Solution ss;
vector<int> vec = {3,1,2,5,3};
vector<int> ans = ss.findRepeating(vec);
for(auto i: ans){
    cout<<i<<" ";
}
return 0;
}