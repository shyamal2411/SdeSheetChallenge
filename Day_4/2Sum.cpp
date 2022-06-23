#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;
class Solution {
public:
  vi twoSum(vi &nums, int target){
      vi ans;
      map<int, int> mp;

      for(int i = 0; i < nums.size(); i++){
          if(mp.find(target - nums[i]) != mp.end()){
              ans.emplace_back(i);
              ans.emplace_back(mp[target - nums[i]]);
              return ans;
          }
          mp[nums[i]] = i;
      }
      return ans;
  }
};

int main(){
Solution ss;
vector<int> vec = {1,2,3,4,5};
vi ans = ss.twoSum(vec, 6);
    for(auto i:ans) cout<<i<<" ";

return 0;
}