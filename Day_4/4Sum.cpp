#include<bits/stdc++.h> 
using namespace std;

#define int long long 
typedef vector<int> vi;
typedef vector<string> vst;
class Solution {
public:
  vector<vi> fourSum(vi &nums, int target){
      int size = nums.size();

      sort(nums.begin(), nums.end());

      set<vi> sv;

      for(int i = 0; i < size; i++){
          for(int j = i+1; j < size; j++){
              for(int k = j+1; k < size; k++){
                  int x = target - nums[i] - nums[j] - nums[k];

                  if(binary_search(nums.begin() + k + 1, nums.end(), x)){
                      vi v;
                      v.push_back(nums[i]);
                      v.push_back(nums[j]);
                      v.push_back(nums[k]);
                      v.push_back(x);
                      sort(v.begin(), v.end());
                      sv.insert(v);
                  }
              }
          }
      }
      vector<vi> ans(sv.begin(), sv.end());
      return ans;
  }
};

int main(){
Solution ss;
vector<int> vec = {1,0,-1,0,-2,2};
vector<vi> sum = ss.fourSum(vec, 0);
for(int i = 0; i < sum.size(); i++){
    for(int j = 0; j < sum[i].size(); j++){
        cout<<sum[i][j]<<" ";
        }
        cout<<endl;
}
return 0;
}